#include <bits/stdc++.h>
using namespace std;

string removeStars(string s) {
    string ans;
    for(char ch:s){
        if(ch=='*') ans.pop_back();
        else ans.push_back(ch);
    }
    return ans;
}
    
int main() {
    cout<<removeStars("leet**cod*e");
   
    return 0;
}