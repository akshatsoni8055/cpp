#include <bits/stdc++.h>
using namespace std;

void insert(stack <int>& st, int x) {
	if (st.empty() || st.top() <= x) {
		st.push(x);
		return;
	}
	int elem = st.top();
	st.pop();
	insert(st, x);
	st.push(elem);
}

void sort(stack <int>& st) {
	if (st.empty()) return;

	int elem = st.top();
	st.pop();
	sort(st);
	insert(st, elem);
}

void sortStack(stack<int>& stack)
{
	// Write your code here
	sort(stack);
}


int main() {
	stack <int> st;
	st.push(4);
	st.push(33);
	st.push(2);
	st.push(1);
	st.push(0);

	sortStack(st);

	while (!st.empty()) {
		cout << st.top() << " ";
		st.pop();
	}

	return 0;
}