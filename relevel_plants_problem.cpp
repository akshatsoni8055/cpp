#include <bits/stdc++.h>
using namespace std;

int main() {

    int n, q;
    cin >> n >> q;
    unordered_map <int, int> temp;
    vector <int> v;

// taking input
    int t, r;
    for (int i=0; i<n; i++) {
        cin >> t >> r;
        temp[t] = r;
    }
// calculation
    while (q--) {
        int x, y, sum = 0;
        cin >> x >> y;

        for (auto i: temp) {
            if (i.first >= x && i.first <=y) {
                sum += i.second;
            }
        }

        v.push_back(sum);
    }

// output
    for (auto i: v) {
        cout << i << " ";
    }


    return 0;
}