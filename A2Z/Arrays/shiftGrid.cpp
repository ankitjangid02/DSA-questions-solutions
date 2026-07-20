#include <bits/stdc++.h>
using namespace std;

vector<vector<int>> shiftGrid(vector<vector<int>>& grid, int k) {
    int m=grid.size();
    int n=grid[0].size();
    while(k--){
        int y=grid[m-1][n-1];
        for(int i=m-1; i>=0; i--){
            for(int j=n-1; j>=0; j--){
                if(i==0 && j==0) grid[i][j]=y;
                else if(j==0) grid[i][j]=grid[i-1][n-1];
                else grid[i][j]=grid[i][j-1];
            }
        }
    }
    return grid;
}

int main() {
    vector<vector<int>> arr={{3,8,1,9},{19,7,2,5},{4,6,11,10},{12,0,21,13}};
    vector<vector<int>> ans = shiftGrid(arr,4);

    for (int i = 0; i < ans.size(); i++) {
        for (int j = 0; j < ans[i].size(); j++) {
            cout << ans[i][j] << " ";
        }
        cout << endl;
    }

    return 0;
}