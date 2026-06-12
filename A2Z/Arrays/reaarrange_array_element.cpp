#include <bits/stdc++.h>
using namespace std;

void reaarrange_array_element(vector<int> arr){
    int n=arr.size();
    int j=0,k=1;
    int arr1[n];
    for(int i=0; i<n; i++){
        if(arr[i]>=0){
            arr1[j]=arr[i];
            j=j+2;
        }
        else{
            arr1[k]=arr[i];
            k=k+2;
        }
    }
    for(int i=0; i<n; i++){
        cout<<arr1[i]<<" ";
    }
}

int main() {
    vector<int> arr={3,1,-2,-5,2,-4,6,-9};
    reaarrange_array_element(arr);
    return 0;
}