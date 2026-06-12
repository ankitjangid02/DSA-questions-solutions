#include <bits/stdc++.h>
using namespace std;

void maximum_subarray_sum(vector<int> arr){
    int n=arr.size();
    int max=arr[0];
    for(int i=0; i<n; i++){
        int count=0;
        for(int j=i; j<n; j++){
            count+=arr[j];
            if(count>max){
                max=count;
            }
        }
    }
    cout<<max;
}

int main() {
    vector<int> arr={-2,-3,4,-1,-2,1,3,5,-3};
    maximum_subarray_sum(arr);
    return 0;
}