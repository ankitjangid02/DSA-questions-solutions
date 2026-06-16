#include <bits/stdc++.h>
using namespace std;

void reverseInteger(int x){
    string str=to_string(x);
    if(str[0]=='-') reverse(str.begin()+1,str.end());
    else reverse(str.begin(),str.end());
    cout<<stoi(str);
}

int main() {
    reverseInteger(123);

    return 0;
}