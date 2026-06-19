#include <bits/stdc++.h>
using namespace std;

bool searchIn2DMatrix(vector<vector<int>> &matrix, int target){
    int n=matrix.size();
    int m=matrix[0].size();
    int low=0;
    int high=n*m-1;
    while(low<=high){
        int mid=(low+high)/2;
        int row=mid/m;
        int col=mid%m;
        if(matrix[row][col]==target){
                return true;
        }
        else if(matrix[row][col]<target) low=mid+1;
        else high=mid-1;
    }
    return false;
}

int main() {
    vector<vector<int>> matrix={
        {3,4,7,9},
        {12,13,16,18},
        {20,21,23,29}
    };
    
    cout<<searchIn2DMatrix(matrix,22);

    return 0;
}