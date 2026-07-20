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
    return low;
}

int main() {
    vector<int> arr={1,7,3,6,5,6};
    cout<<pivotIndex(arr);

    return 0;
}