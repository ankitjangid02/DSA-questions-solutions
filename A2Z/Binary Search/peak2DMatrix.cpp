#include <bits/stdc++.h>
using namespace std;

int maxCol(vector<vector<int>> &matrix, int col){
    int n=matrix[col].size();
    int max=-1;
    int index=-1;
    for(int i=0; i<n; i++){
        if(matrix[i][col]>max){ 
            index=i;
            max=matrix[i][col];}
    }
    return index;;
}

pair<int,int> peak2DMatrix(vector<vector<int>> &matrix){
    int n=matrix.size();
    int m=matrix[0].size();
    int low=0, high=m-1;
    while(low<=high){
        int mid=(low+high)/2;
        int maxRow=maxCol(matrix,mid);
        int left = mid-1>0 ? matrix[maxRow][mid-1]:-1;
        int right = mid+1>0 ? matrix[maxRow][mid+1]:-1;
        if(matrix[maxRow][mid]>left && matrix[maxRow][mid]>right) return {maxRow,mid};
        else if(matrix[maxRow][mid]<left) high=mid-1;
        else low=mid+1;
    }
    return {-1,-1};
}

int main() {
    vector<vector<int>> matrix={
        {5,10,8,9,1},
        {4,25,7,2,5},
        {3,9,6,28,22},
        {2,10,11,12,13},
        {7,8,10,9,19}
    };
    
    pair<int,int> p=peak2DMatrix(matrix);
    cout<<p.first<<" "<<p.second;

    return 0;
}