#include <bits/stdc++.h>
using namespace std;

int minWays(int arr[], int n, int m, unordered_map<int, int>& dp) {

    if (m == 0) return 0;
    if (dp.find(m) != dp.end()) return dp[m];

    int count = 100000;

    for (int i = 0; i < n; i++) {
        if (m - arr[i] >= 0) {
            count = min(count, minWays(arr, n, m - arr[i], dp) + 1);
        }
    }

    return dp[m] = count;
}


int main() {

    int arr[] = { 7,5,1 };
    int m = 18;
    unordered_map<int, int> dp;

    cout << minWays(arr, sizeof(arr) / sizeof(arr[0]), m, dp);
    return 0;
}
