#include <bits/stdc++.h>
using namespace std;

int pivotIndex(vector<int>& nums){
    int low=0, high=nums.size()-1;
    int left=nums[low], right=nums[high];
    while(low<high){
        if(left==right) return low+1;
        else if(left<right){
            low++;
            left=left+nums[low];
        }
        else{
            high--;
            right=right+nums[high];
        }
    }
    return -1;
}

int main() {
    vector<int> arr={1,2,3};
    cout<<pivotIndex(arr);

    return 0;
}