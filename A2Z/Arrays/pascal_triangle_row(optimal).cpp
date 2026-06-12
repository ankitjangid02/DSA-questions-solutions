#include <bits/stdc++.h>
using namespace std;

void pascal_triangle_row(int n){
    int ans=1;
    for(int i=1; i<=n; i++){
        cout<<ans<<" ";
        ans=ans*(n-i);
        ans=ans/i;
    }
}

int main() {
    pascal_triangle_row(6);

    return 0;
}