// Online C++ compiler to run C++ program online
#include <bits/stdc++.h>
using namespace std;

int firstOccurence(vector<int>& arr, int k){
    int n=arr.size();
    int low=0;
    int high=n-1;
    int first=-1;
    while(low<=high){
        int mid=(low+high)/2;
        if(arr[mid]==k){
            first=mid;
            high=mid-1;
        }
        else if(arr[mid]<k) low=mid+1;
        else high=mid-1;
    }
    return first;
}

int lastOccurence(vector<int>& arr, int k){
    int n = arr.size();
    int low=0;
    int high=n-1;
    int last=-1;
    while(low<=high){
        int mid = (low+high)/2;
        if(arr[mid]==k){
            last=mid;
            low=mid+1;
        }
        else if(arr[mid]>k) high=mid-1;
        else low=mid+1;
    }
    return last;
}

pair<int,int> firstAndLastPosition(vector<int>& arr, int k){
    int first = firstOccurence(arr,k);
    if(first == -1) return {-1,-1};
    return {first, lastOccurence(arr,k)};
}

int main() {
    vector<int> nums={2,8,8,8,8,8,11,13};
    vector<int>& arr=nums;
    pair<int,int> p = firstAndLastPosition(arr,8);
    cout<<p.first<<' '<<p.second;
    return 0;
}