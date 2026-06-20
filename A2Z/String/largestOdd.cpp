#include <bits/stdc++.h>
using namespace std;

string largestOdd(string str){
    for(int i=str.size()-1; i>=0; i--){
        if(str[i]&1){
            return str.substr(0,i+1);
        }
    }
    return "";
}

int main() {
    cout<<largestOdd("123456");

    return 0;
}