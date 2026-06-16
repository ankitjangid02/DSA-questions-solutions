#include <bits/stdc++.h>
using namespace std;

void countDigit(int x){
    int s=0;
    while(x>0){
        x=x/10;
        s++;
    }
    cout<<s;
}

int main() {
    countDigit(123456789);
    return 0;
}