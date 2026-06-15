// Online C++ compiler to run C++ program online
#include <bits/stdc++.h>
using namespace std;

int lowerBound(vector<int> arr, int target){
    int low=0;
    int high=arr.size()-1;
    int ans=arr.size();
    while(low<=high){
        int mid=(low+high)/2;
        if(arr[mid]>=target){
            ans=mid;
            high=mid-1;
        }
        else low=mid+1;
    }
    return ans;
}

int upperBound(vector<int> arr, int target){
    int low=0;
    int high=arr.size()-1;
    int ans=arr.size();
    while(low<=high){
        int mid=(low+high)/2;
        if(arr[mid]>target){
            ans=mid;
            high=mid-1;
        }
        else low=mid+1;
    }
    return ans;
}

pair<int,int> firstAndLastPosition(vector<int>& arr, int k){
    int n=arr.size();
    int lb=lowerBound(arr,k);
    if(lb==n || arr[lb]!=k) return {-1,-1};
    return {lb,upperBound(arr,k)-1};
}

int main() {
    vector<int> nums={2,4,6,8,8,8,11,13};
    vector<int>& arr=nums;
    pair<int,int> p = firstAndLastPosition(arr,8);
    cout<<p.first<<' '<<p.second;
    return 0;
}