#include <bits/stdc++.h>
using namespace std;

int findGCD(vector<int>& nums) {
    int mini = INT_MAX;
    int maxi = INT_MIN;
    for (auto x : nums){
        mini = min(mini, x);
        maxi = max(maxi, x);
    }
    return __gcd(mini , maxi);
}

int main() {
    vector<int> arr={2,5,6,9,10};
    cout<<findGCD(arr);

    return 0;
}