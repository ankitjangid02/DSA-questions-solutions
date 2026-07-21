#include <bits/stdc++.h>
using namespace std;

int minStartValue(vector<int>& nums) {
    int sum=0;
    int miniSum=0;
    for(int i:nums){
        sum+=i;
        miniSum=min(sum,miniSum);
    }
    return 1-miniSum;
}

int main() {
    vector<int> arr={-3,2,-3,4,3,1};
    cout<<minStartValue(arr);
    
    return 0;
}