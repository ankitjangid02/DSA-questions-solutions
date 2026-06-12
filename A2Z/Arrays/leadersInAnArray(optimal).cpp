#include <bits/stdc++.h>
using namespace std;

void leadersInAnArray(vector<int>& arr){
    int n=arr.size();
    vector<int> arr1;
    int m=arr[n-1];
    arr1.push_back(m);
    for(int i=n-2; i>=0; i--){
        if(arr[i]>m){ 
            arr1.push_back(arr[i]);
            m=arr[i];
        }
    }
    for(int i=0; i<arr1.size(); i++){
        cout<<arr1[i]<<" ";
    }
}

int main() {
    vector<int> arr={10,22,12,3,0,6};
    leadersInAnArray(arr);

    return 0;
}