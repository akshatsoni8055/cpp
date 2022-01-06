#include <bits/stdc++.h>
using namespace std;

void swap (int &a, int &b) {
    int temp = a;
    a = b;
    b = temp;
}

int main () {

    int arr[] = { 1,2,3,4,5,6,7,8,9 };
    int n = sizeof(arr)/sizeof(arr[0]) - 1;

    for (int i=0; i< n/2; i++) {
        swap(arr[i], arr[n-i]);
    }

    for (auto i: arr) {
        cout << i << " ";
    }

    return 0;

}