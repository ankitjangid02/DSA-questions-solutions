#include <bits/stdc++.h>
using namespace std;

int missingNumber(vector<int>& nums) {
        int n=nums.size();
        sort(nums.begin(),nums.end());
        int m=0;
        for(int i=0; i<n; i++){
            if(nums[i]!=m) return m;
            m++;
        }
        if(nums[n]!=n) return n;
        return -1;
}

int main() {
    vector<int> arr={0,1};
    vector<int>& nums=arr;
    cout<<missingNumber(nums);
    return 0;
}