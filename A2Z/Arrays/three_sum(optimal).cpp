#include <bits/stdc++.h>
using namespace std;

void three_sum(vector<int> num){
    vector<vector<int>> ans;
    sort(num.begin(),num.end());
    int n=num.size();
    for(int i=0; i<n; i++){
        if(i>0 && num[i]==num[i-1]) continue;
        int j=i+1;
        int k=n-1;
        while(j<k){
            int sum=num[i]+num[j]+num[k];
            if(sum<0) j++;
            else if(sum>0) k--;
            else{
                vector<int> temp={num[i],num[j],num[k]};
                ans.push_back(temp);
                j++;
                k--;
                while(j<k && num[j]==num[j-1]) j++;
                while(j<k && num[k]==num[k+1]) k--;
            }
        }
    }
    for(int i=0; i<ans.size(); i++){
        for(int j=0; j<ans[0].size(); j++){
            cout<<ans[i][j]<<" ";
        }
        cout<<endl;
    }
}

int main() {
    vector<int> num={-1,-2,0,-2,-1,-2,2,0,0,2,-1,2,2};
    three_sum(num);
    return 0;
}