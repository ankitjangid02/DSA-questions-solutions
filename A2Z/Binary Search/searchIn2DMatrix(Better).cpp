#include <bits/stdc++.h>
using namespace std;

bool searchIn2DMatrix(vector<vector<int>> &matrix, int target){
    int n=matrix.size();
    int m=matrix[0].size();
    for(int i=0; i<n; i++){
        int low=0;
        int high=m-1;
        if(target>matrix[i][low] && target<matrix[i][high]){
            while(low<=high){
                int mid=(low+high)/2;
                if(matrix[i][mid]==target){
                    return true;
                }
                else if(matrix[i][mid]<target) low=mid+1;
                else high=mid-1;
            }
        }
    }
    return false;
}

int main() {
    vector<vector<int>> matrix={
        {3,4,7,9},
        {12,13,16,18},
        {20,21,23,29}
    };
    
    cout<<searchIn2DMatrix(matrix,23);

    return 0;
}