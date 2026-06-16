#include <bits/stdc++.h>
using namespace std;

string capitalize(string str) {
        int n=str.size();
        if(str.empty()) return "-1";
        str[0]=toupper(str[0]);
        for(int i=1; i<n; i++){
            if(str[i-1]==' '){
                str[i]=toupper(str[i]);
            }
        }
        return str;
}

int main() {
    cout<<capitalize("python is fun to learn");
    return 0;
}