#include <bits/stdc++.h>
using namespace std;

int lowerBound(vector<int> nums, int k){
    int n=nums.size();
    int low=0,high=n-1,ans=n;
    while(low<=high){
        int mid=(low+high)/2;
        if(nums[mid]>=k){
            ans=mid;
            high=mid-1;
        }
        else low=mid+1;
    }
    return ans;
}

int max1sRow(vector<vector<int>> &matrix){
    int m=matrix[0].size();
    int n=matrix.size();
    int cnt_max=0;
    int index=-1;
    for(int i=0; i<n; i++){
        int cnt_ones=m-lowerBound(matrix[i],1);
        if(cnt_max<cnt_ones) {
            cnt_max=cnt_ones;
            index=i;
        }
    }
    return index;
}

int main() {
    vector<vector<int>> matrix={
        {0,0,1,1,1},
        {0,0,0,0,0},
        {0,1,1,1,1},
        {0,0,0,0,0},
        {0,1,1,1,1}
    };
    
    cout<<max1sRow(matrix);

    return 0;
}