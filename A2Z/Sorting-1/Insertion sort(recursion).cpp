#include <bits/stdc++.h>
using namespace std;

void insertionSort(vector<int> arr, int n){
    if(n<=1) return;
    for(int i=0;i<n;i++){
        int j=i;
        while(j>0 && arr[j-1]>arr[j]){
            swap(arr[j-1],arr[j]);
            j--;
        }
    }
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
}
int main() {
    int n,y;
    cin>>n;
    vector<int> arr;
    for(int i=0;i<n;i++){
        cin>>y;
        arr.push_back(y);
    }
    
    insertionSort(arr,n);
    
    
    return 0;
}