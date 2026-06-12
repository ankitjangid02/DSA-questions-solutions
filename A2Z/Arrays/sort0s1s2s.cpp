#include <bits/stdc++.h>
using namespace std;
void sort0s1s2s(vector<int> arr){
    int n=arr.size();
    int low=0;
    int mid=0;
    int high=n-1;
    while(mid<=high){
        if(arr[mid]==0){
            swap(arr[low],arr[mid]);
            mid++;
            low++;
        }
        else if(arr[mid]==1){
            mid++;
        }
        else{
            swap(arr[high],arr[mid]);
            high--;
        }
    }
    for(int i=0; i<n; i++){
        cout<<arr[i]<<" ";
    }
    return;
}
int main() {
    vector<int> arr={0,1,2,0,1,2,1,2,0,1,2,0,2,0,1};
    sort0s1s2s(arr);
    return 0;
}