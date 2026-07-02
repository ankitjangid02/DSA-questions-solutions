#include <bits/stdc++.h>
using namespace std;

vector<int> nextGreaterElement(vector<int>& arr){
    int n=arr.size();
    
    vector<int> nge(n, -1);
    
    for(int i=0; i<n; i++){
        for(int j=i+1; j<n; j++){
            if(arr[i]<arr[j]){
                nge[i]=arr[j];
                break;
            }
        }
    }
    
    return nge;
}

int main() {
    vector<int> arr={6, 0 , 8, 1, 3};
    vector<int> arr2=nextGreaterElement(arr);
    for(int i:arr2){
        cout<<i<<" ";
    }
    

    return 0;
}