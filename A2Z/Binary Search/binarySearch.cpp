#include <bits/stdc++.h>
using namespace std;

int binarySearch(vector<int> arr, int target){
    int low = 0;
    int high = arr.size() - 1;
    while(low<=high){
        int mid = (low+high)/2;
        if(arr[mid]==target) return mid;
        else if(arr[mid]>target) high=mid-1;
        else low=mid+1;
    }
    return -1;
}

int main() {
    vector<int> arr= {3,4,6,7,9,12,17};
    cout<<binarySearch(arr,6);

    return 0;
}