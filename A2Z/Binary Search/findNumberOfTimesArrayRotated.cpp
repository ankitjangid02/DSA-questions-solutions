#include <bits/stdc++.h>
using namespace std;

int findNumberOfTimesArrayRotated(vector<int>& nums){
    int n=nums.size();
    int low=0,high=n-1;
    int ans=INT_MAX;
    int index=-1;
    while(low<=high){
        int mid=(low+high)/2;
        
        // if already sorted
        if(nums[low]<=nums[high]){
            if(nums[low]<ans){
                index=low;
                ans=nums[low];
            }
            break;
        }
        
        // left sorted
        if(nums[mid]>=nums[low]){
            if(nums[low]<ans){
                index=low;
                ans=nums[low];
            }
            low=mid+1;
        }
        
        // right sorted
        else{
            if(nums[mid]<ans){
                index=mid;
                ans=nums[mid];
            }
            high=mid-1;
        }
    }
    return index;
}

int main() {
    vector<int> arr={4,5,6,7,0,1,2,3};
    vector<int>& nums=arr;
    cout<<findNumberOfTimesArrayRotated(nums);
    
    return 0;
}