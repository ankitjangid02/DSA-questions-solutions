#include <bits/stdc++.h>
using namespace std;

int singleElement(vector<int>& nums, int target){
        int n=nums.size();
        int low=0;
        int high=n-1;
        while(low<=high){
            int mid = (low+high)/2;
            if(nums[mid]==target) return mid;
            
            // left sorted
            if(nums[mid]>=nums[low]){
                if(nums[mid]>=target && nums[low]<=target) high=mid-1;
                else low=mid+1;
            }
            
            // right sorted
            else{
                if(nums[mid]<=target && nums[high]>=target) low=mid+1;
                else high=mid-1;
            }
        }
        return -1;
}

int main() {
    vector<int> arr={1,1,2,2,3,3,4,5,5,6,6};
    vector<int>& nums=arr;

    cout<<singleElement(nums, 5);    

    return 0;
}