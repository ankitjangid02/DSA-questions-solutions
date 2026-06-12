#include <bits/stdc++.h>
using namespace std;

int isSorted(int arr[], int n){
    int a=arr[0];
    for(int i=0; i<n; i++){
        if(arr[i]>=a){
            a=arr[i];
        }
        else{
            return -1;
        }
    }
    return 1;
}

int main() {
    int n;
    cin>>n;
    int arr[n];
    for(int i=0; i<n; i++){
        cin>>arr[i];
    }
    if(isSorted(arr,n)==-1) cout<<"Not Sorted";
    else cout<<"Sorted";

    return 0;
}