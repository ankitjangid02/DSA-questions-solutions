#include <bits/stdc++.h>
using namespace std;

void subarrays_with_given_sum(vector<int> arr, int target){
    int n=arr.size();
    int count=0;
    int sa=0;
    for(int i=0; i<n; i++){
        for(int j=i; j<=n; j++){
            if(count<target){
                count=count+arr[j];
            }
            else if(count==target){
                sa++;
                count=0;
                break;
            }
            else{
                count=0;
                break;
            }
        }
    }
    cout<<sa;
}

int main() {
    vector<int> arr={1,2,3,2,4,1,5};
    subarrays_with_given_sum(arr,6);
    return 0;
}