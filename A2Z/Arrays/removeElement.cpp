#include <bits/stdc++.h>
using namespace std;

int removeElement(vector<int>& nums, int val) {
        int n=nums.size();
        int cnt=n;
        for(int i=0; i<n; i++){
            if(nums[i]==val){
                for(int j=i; j<n; j++){
                    if(nums[j]!=val){
                        swap(nums[j],nums[i]);
                        continue;
                    }
                }
            }
        }
        for(int el:nums){
            if(el==val) cnt--;
        }
        for(int k=0; k<cnt; k++){
            cout<<nums[k];
        }
        cout<<endl;
        return cnt;
}

int main() {
    vector<int> arr = {3, 2, 2, 3};
    vector<int>& nums = arr;
    cout<<removeElement(nums,3);
    return 0;
}