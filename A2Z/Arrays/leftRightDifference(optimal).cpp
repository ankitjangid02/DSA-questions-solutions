#include <bits/stdc++.h>
using namespace std;

vector<int> leftRightDifference(vector<int>& nums) {
    int n=nums.size();
    vector<int> ans(n);
    int total=0;
    for(int i:nums) total+=i;
    int leftSum=0;
    for(int i=0; i<n; i++){
        total-=nums[i];
        ans[i]=(abs(leftSum-total));
        leftSum+=nums[i];
    }
    return ans;
}

int main() {
    vector<int> arr={10,4,8,3};
    vector<int> ans=leftRightDifference(arr);
    
    for(int i:ans){
        cout<<i<<" ";
    }
    
    return 0;
}