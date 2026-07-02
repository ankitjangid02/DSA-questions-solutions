#include <bits/stdc++.h>
using namespace std;

vector<int> nearestSmallerElementOnLeft(vector<int>& arr){
    stack<int> s;
    vector<int> nge(arr.size(),-1);
    
    for(int i=0; i<arr.size(); i++){
        for(int j=i-1; j>=0; j--){
            if(arr[j]<arr[i]){
                nge[i]=arr[j];
                break;
            }
        }
    }
    
    return nge;
}

int main() {
    vector<int> arr={4,5,2,10,8};
    vector<int> arr2=nearestSmallerElementOnLeft(arr);
    for(int i:arr2){
        cout<<i<<" ";
    }
    

    return 0;
}