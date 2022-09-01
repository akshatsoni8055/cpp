#include <bits/stdc++.h>
using namespace std;

int solve(int arr[]) {

    int n = sizeof(arr)/sizeof(int);
    int res = 0;

    for (int i=0; i<n-1; i++) {
        res = max(res, arr[i+1] - arr[i]);
    }

    return res;

}

int main() {
    int arr[4] = { 3,6,9,1 };
    cout << solve(arr);
}