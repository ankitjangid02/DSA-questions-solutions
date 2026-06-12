#include <bits/stdc++.h>
using namespace std;

void majority_element_2(vector<int> arr){
    vector<int> ls;
    map<int,int> mpp;
    int n=arr.size();
    int mini=(int)(n/3)+1;
    for(int i=0; i<n; i++){
        mpp[arr[i]]++;
        if(mpp[arr[i]]==mini){
            ls.push_back(arr[i]);
        }
    }
    for(int i=0; i<ls.size(); i++){
        cout<<ls[i]<<" ";
    }
}

int main() {
    vector<int> arr={1,1,1,2,2,3,3,3};
    majority_element_2(arr);
    return 0;
}