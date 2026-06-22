#include <bits/stdc++.h>
using namespace std;

int balloon(string str){
    vector<int> freq(26,0);
    for(char c:str){
        freq[c-'a']++;
    }
//     for(int i = 0; i < 26; i++) {
//     cout << char(i + 'a') << " : " << freq[i] << endl;
// }
    return min({
        freq['b'-'a'],
        freq['a'-'a'],
        freq['l'-'a']/2,
        freq['o'-'a']/2,
        freq['n'-'a']
    });
}

int main() {
    cout<<balloon("noolbalunoolbalu");
    return 0;
}