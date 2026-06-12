#include <bits/stdc++.h>
using namespace std;

void majority_element(vector<int> arr){
    int n=arr.size();
    int count=0,element;
    for(int i=0; i<n; i++){
        if(count==0){
            element=arr[i];
        }
        if(arr[i]==element) count++;
        else count--;
    }
    int cut=0;
    for(int i=0; i<n; i++){
        if(arr[i]==element) cut++;
    }
    if(cut>(n/2)) cout<<element;
    else cout<<"No element";
}

int main() {
    vector<int> arr={7,7,5,7,5,1,5,7,5,5,7,7,5,5,5,5};
    majority_element(arr);
    return 0;
}