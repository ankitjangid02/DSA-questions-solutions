#include <bits/stdc++.h>
using namespace std;

int upperBound(vector<int> arr, int target){
    int low=0;
    int high=arr.size()-1;
    int ans=arr.size();
    while(low<=high){
        int mid=(low+high)/2;
        if(arr[mid]>target){
            ans=mid;
            high=mid-1;
        }
        else low=mid+1;
    }
    return ans;
}

int countSmallEqual(vector<vector<int>> &matrix, int x){
    int n=matrix.size();
    int m=matrix[0].size();
    int cnt=0;
    for(int i=0; i<n; i++){
        cnt+=upperBound(matrix[i],x);
    }
    return cnt;
}

int median(vector<vector<int>> &matrix){
    int n=matrix.size();
    int m=matrix[0].size();
    int low=INT_MAX, high=INT_MIN;
    for(int i=0; i<n; i++){
        low=min(low,matrix[i][0]);
        high=max(high, matrix[i][m-1]);
    }
    int req=(n*m)/2;
    while(low<=high){
        int mid=(low+high)/2;
        int smallEqual=countSmallEqual(matrix,mid);
        if(smallEqual<=req) low=mid+1;
        else high=mid-1;
    }
    return low;
}

int main() {
    vector<vector<int>> matrix={
        {1,5,7,9,11},
        {2,3,4,5,10},
        {9,12,14,16}
    };
    
    cout<<median(matrix);

    return 0;
}