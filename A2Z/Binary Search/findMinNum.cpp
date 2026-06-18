#include <bits/stdc++.h>
using namespace std;

int findMinNum(vector<int>& nums){
    int n=nums.size();
    int low=0,high=n-1;
    int ans=INT_MAX;
    while(low<=high){
        int mid=(low+high)/2;
        
        // if already sorted
        if(nums[low]<=nums[high]){
            if(ans<nums[low]){
                ans=nums[low];
            }
            break;
        }
        
        // left sorted
        if(nums[mid]>=nums[low]){
            ans=min(ans, nums[low]);
            low=mid+1;
        }
        
        // right sorted
        else{
            ans=min(ans, nums[mid]);
            high=mid-1;
        }
    }
    return ans;
}

int main() {
    vector<int> arr={4,5,6,7,0,1,2};
    vector<int>& nums=arr;
    cout<<findMinNum(nums);
    
    return 0;
}