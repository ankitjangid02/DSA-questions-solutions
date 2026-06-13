#include <bits/stdc++.h>
using namespace std;

int upperBound(vector<int> arr, int target){
    int low=0;
    int high=arr.size()-1;
    int ans=arr.size();
    while(low<=high){
        int mid=(low+high)/2;
        if(arr[mid]>target){
            ans=mid;
            high=mid-1;
        }
        else low=mid+1;
    }
    return ans;
}

int main() {
    vector<int> arr= {2,3,6,7,8,8,11,11,11,12};
    cout<<upperBound(arr,11);

    return 0;
}