#include <bits/stdc++.h>
using namespace std;

void largest(int arr[], int n){
    int a=arr[0];
    for(int i=0; i<n; i++){
        if(arr[i]>a){
            a=arr[i];
        }
    }
    cout<<a;
}

int main() {
    int n;
    cin>>n;
    int arr[n];
    for(int i=0; i<n; i++){
        cin>>arr[i];
    }
    largest(arr,n);

    return 0;
}