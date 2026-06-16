#include <bits/stdc++.h>
using namespace std;

void palindromeInteger(int x){
    string str=to_string(x);
    reverse(str.begin(),str.end());
    int a=stoi(str);
    if(x-a==0) cout<<"true";
    else cout<<"false";
}

int main() {
    palindromeInteger(12321);
    return 0;
}