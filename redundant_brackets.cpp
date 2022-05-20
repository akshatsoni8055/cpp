#include <bits/stdc++.h>
using namespace std;


bool findRedundantBrackets(string& s) {
    stack<char> st;

    for (int i = 0; i < s.length(); i++) {
        char ch = s[i];
        
        if (ch == '(' || ch == '+' || ch == '-' || ch == '*' || ch == '/') {
            st.push(ch);
        }
        else if (ch == ')') {
            bool flag = true;

            while (st.top() != '(') {
            	char top = st.top();
                if (top == '+' || top == '-' || top == '*' || top == '/') {
                    flag = false;
                }
                st.pop();
            }
            st.pop();

            if (flag) return true;
        }
    }

    return false;
}

int main() {
    string str = "(a+c*b)+(c))";
    cout << findRedundantBrackets(str);
}