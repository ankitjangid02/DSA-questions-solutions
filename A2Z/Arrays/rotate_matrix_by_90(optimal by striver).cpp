#include <bits/stdc++.h>
using namespace std;
void rotate_matrix_by_90(vector<vector<int>> matrix, int m, int n){
    // transpose
    for(int i=0; i<n; i++){
        for(int j=i+1; j<m; j++){
            swap(matrix[i][j], matrix[j][i]);
        }
    }
    // reverse
    for(int i=0; i<n; i++){
        reverse(matrix[i].begin(), matrix[i].end());
    }
    // iterate
    for(int i=0; i<n; i++){
        for(int j=0; j<m; j++){
            cout<<matrix[i][j]<<"  ";
        }
        cout<<endl;
    }
}

int main() {
    vector<vector<int>> matrix={
        {1,2,3,4},
        {5,6,7,8},
        {9,10,11,12},
        {13,14,15,16}};
    rotate_matrix_by_90(matrix,4,4);
    return 0;
}