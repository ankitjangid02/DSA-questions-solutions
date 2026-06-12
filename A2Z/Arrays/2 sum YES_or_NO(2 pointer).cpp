#include <bits/stdc++.h>
using namespace std;

string read(int n, vector<int> arr, int target){
    sort(arr.begin(),arr.end());
    int left=0;
    int right=n-1;
    for(int i=0; i<n/2; i++){
        if(arr[left]+arr[right]>target){
            right--;
        }
        if(arr[left]+arr[right]<target){
            left++;
        }
        if(arr[left]+arr[right]==target){
            return "YES";
        }
    }
    return "NO";
}

int main() {
    vector<int> arr={2,6,5,8,11};
    cout<<read(arr.size(),arr,17);

    return 0;
}