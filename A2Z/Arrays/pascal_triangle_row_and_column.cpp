#include <bits/stdc++.h>
using namespace std;

void pascal_triangle_row_and_column(int n, int r){
    n--;
    r--;
    int res=1;
    for(int i=0; i<r; i++){
        res=res*(n-i);
        res=res/(i+1);
    }
    cout<<res;
}

int main() {
    pascal_triangle_row_and_column(5,);

    return 0;
}