#include <bits/stdc++.h>
using namespace std;


class print {
public:
    void operator() (int x, int y) {
        cout << x + y << " passing a function as class" << endl;
    }

};

int sum(int a, int b) {
    return a + b;
}

void passclassfunction(int x, int y, print func) {
    func(x, y);
}

void passfunction(int x, int y, int func(int, int)) {
    cout << endl << func(x, y);
}

int demo(int x) {
    return x;
}

bool compare(int a, int b) {
    return a < b;
}
int main() {

    vector<int> v;

    v.push_back(1);
    v.push_back(3);
    v.push_back(2);
    v.push_back(5);
    v.push_back(4);
    v.push_back(6);

    int arr[] = { 1,9,8,6,5 };

    sort(v.begin(), v.end(), compare);
    sort(arr, arr + 5, compare);

    for (int i : v) {
        cout << i << " ";
    }
    cout << endl;
    for (int i : arr) {
        cout << i << " ";
    }
    cout << endl;

    print p;
    passclassfunction(1, 2, p);
    passfunction(1, 3, sum);
    cout << demo(1.8927489);

    return 0;
}
