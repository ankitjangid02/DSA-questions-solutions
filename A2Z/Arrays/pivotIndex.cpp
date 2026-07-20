#include <bits/stdc++.h>
using namespace std;

int pivotIndex(vector<int>& nums){
    int low=0, high=nums.size()-1;
    int left=nums[low], right=nums[high];
    while(low<high){
        if(left==right) break;
        else if(left<right){
            low++;
            left=left+nums[low];
        }
        else{
            high--;
            right=right+nums[high];
        }
    }
    if(low+1==high) return -1;
    if(low==0) return low;
    if(high==nums.size()-1) return high;
    return low+1;
}

int main() {
    vector<int> arr={2,1,-1};
    cout<<pivotIndex(arr);

    return 0;
}