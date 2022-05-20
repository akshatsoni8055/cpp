#include <bits/stdc++.h>
using namespace std;

bool isprime(int n) {
    for (int i = 2; i < sqrt(n); i++) {
        if (n % i == 0) return false;
    }

    return true;
}

int main() {
    int n = 100;
    int count = 0;
    int arr[n + 1];

    fill_n(arr, n, 1);



    for (int i = 2; i <= n / 2; i++) {
        if (arr[i] && isprime(i)) {
            for (int j = 2 * i; j <= n; j += i) {
                arr[j] = 0;
            }
        }
    }

    for (int i = 2; i <= n; i++) {
        if (arr[i])
            cout << i << " ";
    }

    return 0;
}