#include <bits/stdc++.h>
using namespace std;

string capitalizeTitle(string str) {
        int n=str.size();
        for(int i=0; i<n; i++){
            str[i]=tolower(str[i]);
        }

        if(n>2){
            if(str[1]!=' ' && str[2]!=' '){
                str[0]=toupper(str[0]);
            }
        
        for(int i=1; i<n-2; i++){
            if(str[i-1]==' ' && str[i+1]!=' ' && str[i+2]!=' '){
                str[i]=toupper(str[i]);
            }
        }
        if(str[n-2]==' '){
            str[n-1]=tolower(str[n-1]);
        }
        if(str[n-3]==' '){
            str[n-2]=tolower(str[n-2]);
        }

        }
        return str;
    }

int main() {
    cout<<capitalizeTitle("a");
    return 0;
}