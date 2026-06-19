#include <bits/stdc++.h>
using namespace std;

pair<int,int> searchIn2DMatrix2(vector<vector<int>> &matrix, int target){
    int n=matrix.size();
    int m=matrix[0].size();
    int row=0,col=m-1;
    while(row<n && col>=0){
        if(matrix[row][col]==target) return {row,col};
        if(matrix[row][col]<target) row++;
        else col--;
    }
    return {-1,-1};
}

int main() {
    vector<vector<int>> matrix={
        {1,4,7,11},
        {2,5,8,12},
        {3,6,9,16},
        {10,13,14,17}
    };
    
    pair<int,int> p=searchIn2DMatrix2(matrix,14);
    cout<<p.first<<" "<<p.second;

    return 0;
}