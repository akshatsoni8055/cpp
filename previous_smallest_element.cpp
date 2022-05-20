#include <bits/stdc++.h>
using namespace std;

int main() {
    int arr[] = { 4, 10, 5, 8, 20, 15, 3, 12 };
    int n = sizeof(arr) / sizeof(arr[0]);
    int prev[n];
    int next[n];



    stack<int> st;
    st.push(-1);

    for (int i = 0; i < n; i++) {

        while (st.top() >= arr[i]) {
            st.pop();
        }

        prev[i] = st.top();
        st.push(arr[i]);
    }


    stack<int> sta;
    sta.push(-1);

    for (int i = n - 1; i >= 0; i--) {

        while (sta.top() >= arr[i]) {
            sta.pop();
        }

        next[i] = sta.top();
        sta.push(arr[i]);
    }

    for (int i = 0; i < n; i++) cout << next[i] << " ";
    cout << endl;
    for (int i = 0; i < n; i++) cout << prev[i] << " ";

    return 0;
}