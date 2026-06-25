#include <bits/stdc++.h>
using namespace std;

bool isPalindrome(string s) {
    string str="";
        for(char c:s){
            if(isalnum(c)){
            str+=tolower(c);
            }
        }
        int i=0;
        int j=str.size()-1;
        while(i<j){
            if(str[i]!=str[j]) return false;
            i++;
            j--;
        }
        return true;
}

int main() {
    cout<<isPalindrome("aa");
    return 0;
}