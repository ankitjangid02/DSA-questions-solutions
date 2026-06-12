#include <bits/stdc++.h>
using namespace std;

void reaarrange_array_element_verity2(vector<int> arr){
    int n=arr.size();
    vector<int> pos,neg;
    for(int i=0; i<n; i++){
        if(arr[i]<0) neg.push_back(arr[i]);
        else pos.push_back(arr[i]);
    }
    if(neg.size()<pos.size()){
       for(int i=0; i<neg.size(); i++){
            arr[2*1]=pos[i];
            arr[2*i+1]=neg[i];
        } 
        int index=2*neg.size();
        for(int i=neg.size(); i<pos.size(); i++){
            arr[index]=pos[i];
            index++;
        }
    }
    else{
        for(int i=0; i<pos.size(); i++){
            arr[2*1]=pos[i];
            arr[2*i+1]=neg[i];
        } 
        int index=2*pos.size();
        for(int i=pos.size(); i<neg.size(); i++){
            arr[index]=neg[i];
            index++;
        }
    }
    
    for(int i=0; i<n; i++){
        cout<<arr[i]<<" ";
    }
}

int main() {
    vector<int> arr={1,-4,2,-5,3,6};
    reaarrange_array_element_verity2(arr);
    return 0;
}