#include <bits/stdc++.h>
using namespace std;

void buy_and_sell_stock(vector<int> arr){
    int n=arr.size();
    int mini=arr[0];
    int maxProfit=0;
    for(int i=0; i<n; i++){
        int cost=arr[i]-mini;
        maxProfit=max(maxProfit,cost);
        mini=min(mini,arr[i]);
    }
    cout<<maxProfit;
}

int main() {
    vector<int> arr={7,1,5,3,6,4};
    buy_and_sell_stock(arr);
    return 0;
}