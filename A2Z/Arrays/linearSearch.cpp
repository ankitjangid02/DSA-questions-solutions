#include <bits/stdc++.h>
using namespace std;

int linearSearch(int arr[], int d, int n){
    for(int i=0; i<n; i++){
        if(arr[i]==d) return i;
    }
    return -1;
}

int main() {
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    int d;
    cin>>d;
    if(linearSearch(arr, d, n)==-1) cout<<"Not in the array";
    else cout<<linearSearch(arr, d, n);

    return 0;
}