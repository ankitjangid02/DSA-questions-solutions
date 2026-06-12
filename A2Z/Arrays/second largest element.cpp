// Online C++ compiler to run C++ program online
#include <bits/stdc++.h>
using namespace std;

int largest(int arr[], int n){
    int a=arr[0];
    int b=-1;
    int j=0;
    
    //largest
    for(int i=0; i<n; i++){
        if(arr[i]>a){
            a=arr[i];
        }
    }
    
    // second largest
    for(int i=0; i<n; i++){
        if(arr[i]>b){
            if(arr[i]==a) continue;
            b=arr[i];
        }
    }
    return b;
}

int main() {
    int n;
    cin>>n;
    int arr[n];
    for(int i=0; i<n; i++){
        cin>>arr[i];
    }
    if(largest(arr,n)==-1) cout<<"All elements are same\nThere is no second largest element";
    else cout<<largest(arr,n);

    return 0;
}