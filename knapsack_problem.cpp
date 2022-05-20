#include <bits/stdc++.h>
using namespace std;

int maxProfit(int w[], int v[], int limit, int i, int n) {

    if (i == n || limit <= 0) {
        return 0;
    }

    int a = 0;

    if (limit - w[i] >= 0) {
        a = maxProfit(w, v, limit - w[i], i + 1, n) + v[i];
    }

    int b = maxProfit(w, v, limit, i + 1, n);

    return max(a, b);

}

int main() {

    int w[] = { 1,3,4,6 };
    int v[] = { 20,30,10,50 };
    int n = 4;

    int limit = 10;

    cout << maxProfit(w, v, limit, 0, n);

    return 0;
}