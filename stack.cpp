#include <bits/stdc++.h>
using namespace std;
#define M 100

template <class X> class Stack {

private:
    int top = -1;
    int size;
    X arr[M];

public:

    Stack(int max) {
        size = max;
    }

    bool push(X el) {
        if (top == size) {
            return false;
        }
        if (top == -1) {
            arr[0] = el;
            top++;
        }
        else {
            arr[++top] = el;
        }
        return true;
    }

    X pop() {
        X x;
        if (top != -1) {
            x = arr[top--];
        }
        return x;
    }

    void print() {
        if (top == -1) return;
        for (int i = 0; i <= top; i++) {
            cout << arr[i] << " ";
        }
    }

};

int main() {
    Stack <char> s(5);
    s.push('h');
    s.push('i');
    s.push('j');
    s.print();

    char x = s.pop();
    cout << endl << x;

    return 0;
}
