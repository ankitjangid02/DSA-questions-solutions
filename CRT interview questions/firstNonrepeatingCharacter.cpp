#include <bits/stdc++.h>
using namespace std;

void firstNonrepeatingCharacter(string str){
    vector<int> freq(256,0);
    
    for(char ch : str){
        freq[ch]++;
    }
    
    for(char ch : str){
        if(freq[ch]==1){
            cout<<ch;
            return;
        }
    }
    cout<<false;
}

int main() {
    firstNonrepeatingCharacter("swiss");
    return 0;
}