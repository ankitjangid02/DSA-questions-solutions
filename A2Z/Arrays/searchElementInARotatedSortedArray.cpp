#include <bits/stdc++.h>
using namespace std;

int searchElementInARotatedSortedArray(vector<int>& nums, int target){
        for(int i=0; i<nums.size(); i++){
            if(nums[i]==target) return i;
        }
        return -1;
}

int main() {
    vector<int> arr={5,1,3};
    vector<int>& nums=arr;

    cout<<searchElementInARotatedSortedArray(nums, 5);    

    return 0;
}