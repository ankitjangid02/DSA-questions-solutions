#include <bits/stdc++.h>
using namespace std;

int missingEle(vector<int> arr){
    int n=arr.size()+1;
    int sum=(n*(n+1))/2;
    int s2=0;
    for(int i=0;i<n;i++){
        s2=s2+arr[i];
    }
    return sum-s2;
}

int main() {
    int n;
    cin>>n;
    n=n-1;
    vector<int> arr;
    for(int i=0;i<n-1;i++){
        int x;
        cin>>x;
        arr.push_back(x);
    }
    cout<<missingEle(arr)<<endl;

    return 0;
}