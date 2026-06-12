#include <bits/stdc++.h>
using namespace std;

void maximum_subarray_sum(vector<int> arr){
    int n=arr.size();
    int max=arr[0];
    int sum=0;
    int s=0,e=0;
    for(int i=0; i<n; i++){
        if(sum==0) s=i;
        sum+=arr[i];
        if(sum>max){ 
            max=sum; 
            e=i;
        }
        if(sum<arr[0]){ 
            sum=0; 
        }
    }
    for(int i=s; i<=e; i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl<<max;
}

int main() {
    vector<int> arr={-2,-3,4,-1,-2,1,5,-3,10};
    maximum_subarray_sum(arr);
    return 0;
}