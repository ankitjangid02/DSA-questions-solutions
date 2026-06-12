#include <bits/stdc++.h>
using namespace std;
int main() {
    int n,y;
    cin>>n;
    int  arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    for(int i=0;i<n;i++){
        y=i;
        for(int j=i;j<n;j++){
            if(arr[j]<=arr[y]){
                y=j;
            }
        }
        swap(arr[y],arr[i]);
    }
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
    
    return 0;
}