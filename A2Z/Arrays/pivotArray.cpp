#include <bits/stdc++.h>
using namespace std;

vector<int> pivotArray(vector<int> &nums, int x){
    vector<int> small;
    vector<int> mid;
    vector<int> big;
    // eg.push_back(x);
    // int index=find(nums.begin(),nums.end(),x)-nums.begin();
    // cout<<index<<endl;
    for(int i=0; i<nums.size(); i++){
        // if(index==i) continue;
        if(nums[i]<x) small.push_back(nums[i]);
        else if(nums[i]==x) mid.push_back(nums[i]);
        else if(nums[i]>x) big.push_back(nums[i]);
    }
    // small.push_back(x);
    // for(int d:mid) cout<<d<<';';
    small.insert(small.end(),mid.begin(),mid.end());
    small.insert(small.end(),big.begin(),big.end());
    return small;
}

int main() {
    vector<int> arr={9,12,5,10,14,3,10};
    vector<int> &nums=arr;
    vector<int> s=pivotArray(nums,10);
    for(int a:s){
        cout<<a<<',';
    }
    return 0;
}