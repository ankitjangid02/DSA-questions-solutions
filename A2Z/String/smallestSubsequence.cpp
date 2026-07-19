#include <bits/stdc++.h>
using namespace std;

string smallestSubsequence(string s) {
    vector<int> freq(26,0);
    vector<int> vis(26,false);
    for(char c: s){
        freq[c-'a']++;
    }
    string ans;
    for(char c: s){
        freq[c-'a']--;
        if(vis[c-'a']) continue;
        while(!ans.empty() && ans.back()>c && freq[ans.back()-'a']>0){
            vis[ans.back()-'a']=false;
            ans.pop_back();
        }
        ans.push_back(c);
        vis[c-'a']=true;
        
    }
    return ans;
}

int main() {
    cout<<smallestSubsequence("bcabc");
    return 0;
}