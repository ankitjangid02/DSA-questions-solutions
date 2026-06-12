#include <bits/stdc++.h>
using namespace std;

int longestSubarrayWithSumK(vector<int> arr, long long k){
    int left=0, right=0;
    int n=arr.size();
    long long sum=arr[0];
    int maxLen=0;
    int count=0;
    while(right<n){
        while(left<= right && sum>k){
            sum-=arr[left];
            left++;
            count=0;
        }
        if(sum == k){
            maxLen=max(maxLen, right-left+1);
        }
        right++;
        if(right<n){
            sum+=arr[right];
        }
    }
    return maxLen;
}

int main() {
    int n;
    cin>>n;
    vector<int> arr;
    for(int i=0; i<n; i++){
       int o;
       cin>>o;
       arr.push_back(o);
    }
    cout<<longestSubarrayWithSumK(arr,6);
    return 0;
}