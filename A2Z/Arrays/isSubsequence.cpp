#include <bits/stdc++.h>
using namespace std;

bool isSubsequence(string s, string t) {
        int f=0, g=0;
        for(int i=0; i<s.size(); i++){
            for(int j=g; j<t.size(); j++){
                if(s[i]==t[j]){
                    f++;
                    g=j+1;
                    cout<<g<<endl<<f<<endl;
                    break;
                }
            }
        }
        if(f==s.size()) return true;
        return false;
    }

int main() {
    cout<<isSubsequence("aza","abzba");
    return 0;
}