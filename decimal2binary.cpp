#include <bits/stdc++.h>
using namespace std;

int reverse(int x) {
    int res = 0;
    while (x) {
        res = res*10 + (x % 10);
        x /= 10;
    }
    return res;
}

int compliment(int n) {

}

long long decimal2binary(int n) {
    long long ans = 0;
    int i = 0;
    while (n) {
        ans += (n & 1) * pow(10, i++);
        n = n >> 1;
    }
    return ans;
}

int main() {

    cout << decimal2binary(53) << endl;
    cout << reverse(721) << endl;
    cout << compliment(5) << endl;

    return 0;

}