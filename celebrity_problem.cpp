#include <bits/stdc++.h>
using namespace std;

int celebrity(vector<vector<int> >& arr, int n) {
    stack <int> st;

    for (int i = 0; i < n; i++) {
        st.push(i);
    }

    while (st.size() > 1) {
        int a = st.top();
        st.pop();
        int b = st.top();
        st.pop();

        if (arr[a][b]) st.push(b);
        else st.push(a);
    }
    
    int celeb = st.top();
    int col = 0, row = 0;
    
    for (int i=0; i<n; i++) {
        if (arr[celeb][i] == 0) {
            row++;
        }
        
        if (arr[i][celeb] == 1) {
            col++;
        }
    }
    
    if (col == n-1 && row == n) return celeb;
    return -1;
}

int main() {
    int n = 3;
    vector<vector<int>> arr = { {0, 1, 0},
                                {0, 0, 0},
                                {0, 1, 0} };

    cout << celebrity(arr, n);

    return 0;
}