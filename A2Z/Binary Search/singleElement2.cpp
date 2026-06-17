#include <bits/stdc++.h>
using namespace std;

bool singleElement2(vector<int>& nums, int target){
        int n=nums.size();
        int low=0;
        int high=n-1;
        while(low<=high){
            int mid=(low+high)/2;
            if(nums[mid]==target) return true;
            
            if(nums[mid]==nums[low] && nums[mid]==nums[high]){
                low=mid+1;
                high=mid-1;
            }
            
            // left sorted
            if(nums[mid]>=target && nums[low]<=target){
                if(nums[mid]>=target) high=mid-1;
                else low=mid+1;
            }
            
            // right sorted
            else{
                if(nums[mid]<=target) low=mid+1;
                else high=mid-1;
            }
        }
        return false;
}

int main() {
    vector<int> arr={1,1,2,2,3,3,4,5,5,6,6};
    vector<int>& nums=arr;

    cout<<singleElement2(nums, 9);    

    return 0;
}