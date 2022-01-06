#include <bits/stdc++.h>
using namespace std;

int main() {
    int arr[] = { 1,2,3,-2,5 };
    int n = 5;

    int currsum = 0, maxsum = 0, leastneg = -100000;

    for (int i = 0; i < n; i++) {
        leastneg = max(leastneg, arr[i]);
        currsum += arr[i];
        maxsum = max(currsum, maxsum);
        if (currsum < 0) {
            currsum = 0;
        }
    }

    cout << (maxsum == 0 ? leastneg : maxsum);

    return 0;
}