#include <bits/stdc++.h>
using namespace std;

int squareRoot(int n) {
    int low=1,high=n,ans=1;
    while(low<=high){
        long long mid=(low+high)/2;
        if((mid*mid)<=n){
            ans=mid;
            low=mid+1;
        }
        else high=mid-1;
    }
    return ans;
}

int main() {
    cout<<squareRoot(37);
    return 0;
}