#include <bits/stdc++.h>
using namespace std;

void four_sum(vector<int> nums, int target){
    sort(nums.begin(),nums.end());
    int n=nums.size();
    vector<vector<int>> ans;
    for(int i=0; i<n; i++){
        if(i>0 && nums[i]==nums[i-1]) continue;
        for(int j=i+1; j<n; j++){
            if(j!=i+1 && nums[j]==nums[j-1]) continue;
            int k=j+1;
            int l=n-1;
            while(k<l){
                long long sum=nums[i];
                sum+=nums[j];
                sum+=nums[k];
                sum+=nums[l];
                if(sum==target){
                    vector<int> temp={nums[i],nums[j],nums[k],nums[l]};
                    ans.push_back(temp);
                    k++; l--;
                    while(k<l && nums[k]==nums[k-1]) k++;
                    while(k<l && nums[l]==nums[l+1]) l--;
                }
                else if(sum<target) k++;
                else l--;
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
    vector<int> nums={1,2,3,3,4,3,2,1,3,4,5,5,2,1};
    four_sum(nums,8);
    
    return 0;
}