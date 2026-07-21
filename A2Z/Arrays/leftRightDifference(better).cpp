#include <bits/stdc++.h>
using namespace std;

vector<int> leftRightDifference(vector<int>& nums) {
    int n=nums.size();
    vector<int> leftSum(n);
    int sum=0;
    for(int i=0; i<n; i++){
        leftSum[i]=sum;
        sum+=nums[i];
    }
    sum=0;
    vector<int> rightSum(n);
    for(int i=n-1; i>=0; i--){
        rightSum[i]=sum;
        sum+=nums[i];
    }
    vector<int> ans;
    for(int i=0; i<n; i++){
        ans.push_back(abs(leftSum[i]-rightSum[i]));
    }
    return ans;
}

int main() {
    vector<int> arr={1};
    vector<int> ans=leftRightDifference(arr);
    
    for(int i:ans){
        cout<<i<<" ";
    }
    
    return 0;
}