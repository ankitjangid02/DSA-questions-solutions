#include <bits/stdc++.h>
using namespace std;

string reverseWords(string s) {
    vector<string> ss;
    int j=0;
    string d;
    for(int i=0; i<s.size(); i++){
        if(s[i]!=' '){
            d=d+s[i];
        }
        else{
            if(!d.empty()){
                ss.push_back(d);
                d="";
            }
        }
        // cout<<d<<endl;
    }
    if(!d.empty()) ss.push_back(d);
    string p;
    for(int i=ss.size()-1; i>0; i--){
        p=p+ss[i];
        p=p+" ";
    }
    p=p+ss[0];
    return p;
}

int main() {
    cout<<reverseWords("  hello world  ");
    return 0;
}