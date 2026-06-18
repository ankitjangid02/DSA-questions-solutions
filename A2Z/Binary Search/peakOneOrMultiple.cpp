#include <bits/stdc++.h>
using namespace std;

int peakOneOrMultiple(vector<int>& nums) {
    int n=nums.size();
    if(nums[0]>nums[1]) return 0;
    if(nums[n-1]>nums[n-2]) return n-1;
    int low=1, high=n-2;
    while(low<=high){
        int mid=(low+high)/2;
        if(nums[mid]>nums[mid-1] && nums[mid]>nums[mid+1]) return mid;
        else if(nums[mid]>nums[mid-1]) low=mid+1;
        else high=mid-1;
    }
    return -1;
}

int main() {
    vector<int> arr={1,2,1,3,5,6,4};
    vector<int>& nums=arr;
    cout<<peakOneOrMultiple(nums);
    return 0;
}