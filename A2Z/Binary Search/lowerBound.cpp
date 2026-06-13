#include <bits/stdc++.h>
using namespace std;

int lowerBound(vector<int> arr, int target){
    int low=0;
    int high=arr.size()-1;
    int ans=arr.size();
    while(low<=high){
        int mid=(low+high)/2;
        if(arr[mid]>=target){
            ans=mid;
            high=mid-1;
        }
        else low=mid+1;
    }
    return ans;
}

int main() {
    vector<int> arr= {3,5,8,9,15,19,19,19};
    cout<<lowerBound(arr,16);

    return 0;
}