#include <bits/stdc++.h>
using namespace std;

int doUnion(int a[], int n, int b[], int m)  {
        //code here
        unordered_set<int> map;

        for (int i=0; i<n; i++) {
            if (map.find(a[i]) == map.end()) {
               map.insert(a[i]);
            }
        }
        for (int i=0; i<m; i++) {
            if (map.find(b[i]) == map.end()) {
                map.insert(b[i]);
            }
        }
        
       return map.size();
    }

int main() {
    int arr1[] = {1,2,3,4,5};
    int arr2[] = {1,2,3};

    cout << doUnion(arr1, 5, arr2, 3);
}