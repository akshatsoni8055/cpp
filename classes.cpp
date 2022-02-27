#include<bits/stdc++.h>
using namespace std;

int main() {

    int sum = 0;
    int n;
    int pow;
    int arr[n];

    cin >> n >> pow;
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
        sum += arr[i];
    }

    if (sum == pow) {
        cout << n;
    }

    if (sum < pow) {
        cout << "Evacuate";
    }
    else {
        sort(arr, arr + n);

        int count = 0;
        int i = n - 1;
        sum = 0;
        while (sum < pow) {
            sum += arr[i--];
            count++;
        }

        cout << count;
    }

}