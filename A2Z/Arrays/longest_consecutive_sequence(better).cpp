#include <bits/stdc++.h>
using namespace std;

void longest_consecutive_sequence(vector<int> arr){
    sort(arr.begin(),arr.end());
    int longest=1,cutcur=0,lastsmaller=INT_MIN;
    for(int i=0; i<arr.size(); i++){
        if(arr[i]-1==lastsmaller){
            cutcur+=1;
            lastsmaller=arr[i];
        }
        else if(arr[i]!=lastsmaller){
            cutcur=1;
            lastsmaller=arr[i];
        }
        longest=max(longest, cutcur);
    }
    cout<<longest;
}

int main() {
    vector<int> arr={102,4,100,1,101,3,2,1,1};
    longest_consecutive_sequence(arr);
    return 0;
}