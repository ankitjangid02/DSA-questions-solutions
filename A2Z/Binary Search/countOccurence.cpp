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

int countOccurence(vector<int>& arr, int k){
    if(firstOccurence(arr,k)==-1) return 0;
    return {lastOccurence(arr,k)-firstOccurence(arr,k)+1};
}

int main() {
    vector<int> nums={2,8,8,8,8,8,11,13};
    vector<int>& arr=nums;
    cout<<countOccurence(arr,8);
    return 0;
}