#include <bits/stdc++.h>
using namespace std;

int longestSubarrayWithSumK(vector<int> arr, long long k){
    map<long long,int> preSumMap;
    int n=arr.size();
    long long sum=0;
    int maxLen=0;
    for(int i=0; i<n; i++){
        sum+=arr[i];
        if(sum == k){
            maxLen=max(maxLen, i+1);
        }
        long long rem=sum-k;
        if(preSumMap.find(rem) != preSumMap.end()){
            int len=i - preSumMap[rem];
            maxLen=max(maxLen,len);
        }
        if(preSumMap.find(sum) == preSumMap.end()){
            preSumMap[sum]=i;
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
    cout<<longestSubarrayWithSumK(arr,5);
    return 0;
}