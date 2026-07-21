#include <bits/stdc++.h>
using namespace std;

int convertBinaryToNumber(string s) {
    int ans=0;
    for(int i=s.size()-1; i>=0; i--){
        if(s[i]=='1'){
            ans+=pow(2,(s.size()-1-i));
        }
    }
    return ans;
}

int main() {
    cout << convertBinaryToNumber("0111");

    return 0;
}