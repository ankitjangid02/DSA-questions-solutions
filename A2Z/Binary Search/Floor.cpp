#include <bits/stdc++.h>
using namespace std;

int Floor(vector<int> arr, int target){
    int low=0;
    int high=arr.size()-1;
    int ans=-1;
    while(low<=high){
        int mid=(low+high)/2;
        if(arr[mid]<=target){
            ans=arr[mid];
            low=mid+1;
        }
        else high=mid-1;
    }
    return ans;
}

int main() {
    vector<int> arr= {10,20,30,40};
    cout<<Floor(arr,25);

    return 0;
}