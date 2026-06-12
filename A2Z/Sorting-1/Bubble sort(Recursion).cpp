#include <bits/stdc++.h>
using namespace std;

void bubbleSort(vector<int> arr, int n){
    if(n==1) return;
    int d=0;
    for(int i=0;i<n;i++){
        for(int j=0;j<n-i;j++){
            if(arr[j]>arr[j+1]){
                swap(arr[j],arr[j+1]);
                d=1;
            }
        }
        if(d==0){
            bubbleSort(arr,n-1);
        }
        
    }
    for(int i=1;i<=n;i++){
        cout<<arr[i]<<" ";
    }
}
int main() {
    int n;
    cin>>n;
    vector<int>  arr;
    for(int i=0;i<n;i++){
        int x;
        cin>>x;
        arr.push_back(x);
    }
    bubbleSort(arr,n);
    return 0;
}