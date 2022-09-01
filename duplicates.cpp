#include <bits/stdc++.h>
using namespace std;

vector<int> duplicates(int arr[], int n) {
    vector<int> res;
    unordered_map<int, int> s;

    for (int i = 0; i < n; i++) {
        if (s.find(arr[i]) == s.end()) {
            s[arr[i]] = 1;
        }
        else {
            s[arr[i]]++;
        }
    }

    for (auto i: s) {
        if (i.second > 1) {
            res.push_back(i.first);
        }
    }

    if (res.size()) return res;

    res.push_back(-1);
    return res;
}

int main() {

    int arr[] = { 13, 9, 25, 1, 1, 0, 22, 13, 22, 20, 3, 8, 11, 25, 10, 3, 15, 11, 19, 20, 2, 4, 25, 14, 23, 14 };
    vector<int> res = duplicates(arr, 26);

    for (auto i : res) {
        cout << i << " ";
    }


    return 0;
}