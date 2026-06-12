#include <bits/stdc++.h>
using namespace std;

void read(int n, vector<int> book, int target){
    map<int,int> mpp;
    for(int i=0; i<n; i++){
        int a=book[i];
        int more=target-a;
        if(mpp.find(more)!=mpp.end()){
            cout<<mpp[more]<<" "<<i;
            return;
        }
        mpp[a]=i;
    }
    return;
}

int main() {
    vector<int> arr={2,6,5,8,11};
    read(arr.size(),arr,14);

    return 0;
}