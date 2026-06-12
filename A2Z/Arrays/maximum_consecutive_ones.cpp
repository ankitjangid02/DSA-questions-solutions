#include <bits/stdc++.h>
using namespace std;

void maximum_consecutive_ones(vector<int> arr){
    int n=arr.size();
    int count=0;
    int max=0;
    for(int i=0; i<n; i++){
        if(arr[i]==1){ 
            count++;
            if(count>max){
                max=count;
            }
        }
        else count=0;
    }
    cout<<max;
}

int main() {
    vector<int> arr={1,1,0,1,0,1,0,1,1,0};
    maximum_consecutive_ones(arr);
    return 0;
}