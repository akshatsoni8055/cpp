#include <bits/stdc++.h>
using namespace std;

vector<int> common_element(vector<int>v1, vector<int>v2) {
    map<int, int> s1;
    map<int, int> s2;
    vector<int> v;

    for (auto i : v1) {
        if (s1.find(i) == s1.end()) {
            s1[i] = 1;
        }
        else {
            s1[i]++;
        }
    }
    for (auto i : v2) {
        if (s2.find(i) == s2.end()) {
            s2[i] = 1;
        }
        else {
            s2[i]++;
        }
    }

    for (auto i : s1) {
        if (s2.find(i.first) != s2.end()) {
            for (int itr = 1; itr <= min(i.second, s2[i.first]); itr++) {
                v.push_back(i.first);
            }
        }
    }

    return v;
}
int main() {
    vector <int> v1;
    vector <int> v2;

    v1.push_back(3);
    v1.push_back(3);
    v1.push_back(3);
    v1.push_back(3);
    v1.push_back(3);
    v2.push_back(3);
    v2.push_back(3);
    v2.push_back(3);
    v2.push_back(3);
    v2.push_back(3);

    vector <int> v = common_element(v1, v2);

    for (auto i: v) cout << i << " ";

    return 0;
}