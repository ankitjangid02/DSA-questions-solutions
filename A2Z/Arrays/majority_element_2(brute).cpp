#include <bits/stdc++.h>
using namespace std;

void majority_element_2(vector<int> arr){
    vector<int> ls;
    int n=arr.size();
    int count=0;
    for(int i=0; i<n; i++){
        if(ls.size()==0 || ls[0]!=arr[i]){
            count=0;
            for(int j=0; j<n; j++){
                if(arr[j]==arr[i]){
                    count++;
                }
            }
            if(count>(n/3)){
                ls.push_back(arr[i]);
            }
        }
        if(ls.size()==2) break;
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