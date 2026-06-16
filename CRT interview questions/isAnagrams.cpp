#include <bits/stdc++.h>
using namespace std;

void isAnagrams(string str1, string str2){
    int n1=str1.size();
    int n2=str2.size();
    if(n1!=n2){
        cout<<false;
        return;
    }
    
    // int s=n1;
    // for(int i=0; i<n1; i++){
    //     for(int j=0; j<n2; j++){
    //         if(str1[i]==str2[j]) s--;
    //     }
    // }
    // if(s==0) cout<<true;
    // else cout<<false;
    
    sort(str1.begin(),str1.end());
    sort(str2.begin(),str2.end());
    if(str1 == str2) cout<<true;
    else cout<<false;
}

int main() {
    isAnagrams("listen", "silent");
    return 0;
}