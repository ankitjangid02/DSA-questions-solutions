#include <bits/stdc++.h>
using namespace std;

void leadersInAnArray(vector<int>& arr){
    int n=arr.size();
    vector<int> arr1;
    for(int i=0; i<n; i++){
        int c=0;
        for(int j=i; j<n; j++){
            if(arr[j]>arr[i]){
                c=1;
                break;
            }
        }
        if(c==0) arr1.push_back(arr[i]);
    }
    for(int i=0; i<arr1.size(); i++){
        cout<<arr1[i]<<" ";
    }
}

int main() {
    vector<int> arr={10,22,23,12,3,0,6};
    leadersInAnArray(arr);

    return 0;
}