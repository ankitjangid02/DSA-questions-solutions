#include <bits/stdc++.h>
using namespace std;

int binarySearch(vector<int> arr, int low, int high, int target){
    if(low>high) return -1;
    int mid = low+(high-low)/2;
    if(arr[mid]==target) return mid;
    else if(target>arr[mid]) return binarySearch(arr,mid+1,high,target);
    return binarySearch(arr,low,mid-1,target);
}

int main() {
    vector<int> arr= {3,4,6,7,9,12,17};
    cout<<binarySearch(arr,0,arr.size(),6);

    return 0;
}