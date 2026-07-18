#include <bits/stdc++.h>
using namespace std;

vector<int> runningSum(vector<int>& nums) {
    vector<int> newArr;
    int s=0;
    for(int i=0; i<nums.size(); i++){
        s+=nums[i];
        newArr.push_back(s);
    }
    return newArr;
}

int main() {
    vector<int> arr={1,2,3,4};
    vector<int> newArr=runningSum(arr);
    for(int i:newArr){
        cout<<i<<" ";
    }

    return 0;
}