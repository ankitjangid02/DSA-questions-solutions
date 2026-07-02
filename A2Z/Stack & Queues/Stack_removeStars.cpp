#include <bits/stdc++.h>
using namespace std;

string removeStars(string s) {
    stack<char> ch;
    int n=s.size();
    string newS="";
    for(char c:s){
        if(c=='*') ch.pop();
        else ch.push(c);
    }
    while(!ch.empty()){
        newS+=ch.top();
        ch.pop();
    }
    reverse(newS.begin(),newS.end());
    return newS;
}
    
int main() {
    cout<<removeStars("leet**cod*e");
   
    return 0;
}