#include <bits/stdc++.h>
using namespace std;

int nCr(int n, int r){
    n--;
    r--;
    int res=1;
    for(int i=0; i<r; i++){
        res=res*(n-i);
        res=res/(i+1);
    }
    return res;
}

void pascal_triangle_row(int n){
    for(int i=1; i<=n; i++){
        cout<<nCr(n,i)<<" ";
    }
}

int main() {
    pascal_triangle_row(6);

    return 0;
}