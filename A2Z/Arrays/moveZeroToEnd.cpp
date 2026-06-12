#include <bits/stdc++.h>
using namespace std;

void moveZeroToEnd(int arr[], int n){
    int x=0;
    for(int i=0;i<n;i++){
        if(arr[i]==0){
            x++;
        }
        else{
            arr[i-x]=arr[i];
        }
    }
    for(int i=n-x;i<n;i++){
        arr[i]=0;
    }
}

int main() {
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    moveZeroToEnd(arr,n);
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }

    return 0;
}