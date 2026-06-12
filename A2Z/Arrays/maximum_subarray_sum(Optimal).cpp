#include <bits/stdc++.h>
using namespace std;

void maximum_subarray_sum(vector<int> arr){
    int n=arr.size();
    int max=arr[0];
    int sum=0;
    for(int i=0; i<n; i++){
        sum+=arr[i];
        if(sum>max) max=sum;
        if(sum<arr[0]) sum=0;
    }
    cout<<max;
}

int main() {
    vector<int> arr={-2,-3,4,-1,-2,1,5,-3};
    maximum_subarray_sum(arr);
    return 0;
}