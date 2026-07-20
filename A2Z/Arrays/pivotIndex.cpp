#include <bits/stdc++.h>
using namespace std;

int pivotIndex(vector<int>& nums){
    int total=0;
    for(int x:nums) total+=x;
    
    int left=0;

    for(int i=0; i<nums.size()-1; i++){
        if(left==total-left-nums[i]) return i;
        left+=nums[i];
    }

    return -1;
}

int main() {
    vector<int> arr={1,7,3,6,5,6};
    cout<<pivotIndex(arr);

    return 0;
}