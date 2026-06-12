#include <bits/stdc++.h>
using namespace std;

void longest_consecutive_sequence(vector<int> arr){
    if(arr.size()==0){
        cout<<0;
        return;
    }
    unordered_set<int> st;
    int longest=1;
    for(int i=0; i<arr.size(); i++){
        st.insert(arr[i]);
    }
    for(auto it: st){
        if(st.find(it-1)==st.end()){
            int cut=1;
            int x=it;
            while(st.find(x+1)!=st.end()){
                x=x+1;
                cut++;
            }
            longest=max(longest,cut);
        }
    }
    cout<<longest;
}

int main() {
    vector<int> arr={102,4,100,1,101,5,3,2,1,1};
    longest_consecutive_sequence(arr);
    return 0;
}