#include <bits/stdc++.h>
using namespace std;

void pSet(vector<int>& set, int i, vector<int> curr, vector<vector<int>>& result) {

    if (i == set.size()) {
        result.push_back(curr);
        return;
    }


    pSet(set, i+1, curr, result);
    curr.push_back(set[i]);
    pSet(set, i+1, curr, result);
}

int main() {

    vector<int> set = { 1,2,3 };
    vector<int> temp;
    vector<vector<int>> result;

    pSet(set, 0, temp, result);


    for (auto i: result) {
        for (auto j: i) {
            cout << j << " ";
        }
        cout << endl;
    }

    return 0;
}