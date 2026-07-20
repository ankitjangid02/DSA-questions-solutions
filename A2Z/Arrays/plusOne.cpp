#include <bits/stdc++.h>
using namespace std;


vector<int> plusOne(vector<int>& digits) {
    int n = digits.size();
    for (int i = n - 1; i >= 0; i--) {
        if (digits[i] < 9) {
            digits[i]++;
            return digits;
        }
        digits[i] = 0;
    }

    vector<int> ans(n + 1, 0);
    ans[0] = 1;
    return ans;
}


int main() {

    vector<int> digits={1,2,3,9};

    vector<int> ans = plusOne(digits);

    cout << "Result: ";
    for (int x : ans) {
        cout << x << " ";
    }
    cout << endl;

    return 0;
}