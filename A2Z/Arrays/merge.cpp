#include <bits/stdc++.h>
using namespace std;

void merge(vector<int>& nums1, int m, vector<int>& nums2, int n){
    vector<int> arr;
    int a=0;
    for(int i=n; i<m+n; i++){
        nums1[i]=nums2[a];
        a++;
    }
    sort(nums1.begin(),nums1.end());
    // for(int i=0; i<n; i++){
    //     arr.push_back(nums2[i]);
    // }
    for(int x:nums1){
        cout<<x<<',';
    }
}

int main() {
    vector<int> arr1={1,2,3,0,0,0};
    vector<int> &nums1=arr1;
    vector<int> arr2={2,5,6};
    vector<int> &nums2=arr2;
    merge(nums1,3,nums2,3);

    return 0;
}