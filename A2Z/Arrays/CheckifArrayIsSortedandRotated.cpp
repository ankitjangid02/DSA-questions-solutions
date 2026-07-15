#include <bits/stdc++.h>
using namespace std;

bool check(vector<int>& nums) {
    int cnt=0;
    for(int i=0; i<nums.size(); i++){
        if(nums[i]>nums[(i+1)%nums.size()]) cnt++;
    }
    return cnt<=1;
}

int main() {
    vector<int> arr={3,4,5,1,2};
    cout<<check(arr);

    return 0;
}