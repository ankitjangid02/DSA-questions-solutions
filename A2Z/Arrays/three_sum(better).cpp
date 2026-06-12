#include <bits/stdc++.h>
using namespace std;

void three_sum(vector<int> num){
    set<vector<int>> st;
    int n=num.size();
    for(int i=0; i<n; i++){
        set<int> hashset;
        for(int j=i+1; j<n; j++){
            int third=-(num[i]+num[j]);
            if(hashset.find(third)!=hashset.end()){
                vector<int> temp={num[i],num[j],third};
                sort(temp.begin(),temp.end());
                st.insert(temp);
            }
            hashset.insert(num[j]);
        }
    }
    vector<vector<int>> ans(st.begin(), st.end());
    for(int i=0; i<ans.size(); i++){
        for(int j=0; j<ans[0].size(); j++){
            cout<<ans[i][j]<<" ";
        }
        cout<<endl;
    }
}

int main() {
    vector<int> num={-1,0,1,2,-1,-4};
    three_sum(num);
    return 0;
}