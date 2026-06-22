#include <bits/stdc++.h>
using namespace std;

vector<int> rotate(vector<int>& nums, int k) {
        // int n = nums.size();

        // k %= n;

        reverse(nums.begin(), nums.end());
        reverse(nums.begin(), nums.begin() + k);
        reverse(nums.begin() + k, nums.end());

        return nums;
    }

int main() {
    vector<int> arr={1,2,3,4,5,6,7,8,9};
    // vector<int> &nums=arr;
    vector<int> o=rotate(arr,3);
    for(int i:o){
        cout<<i;
    }

    return 0;
}