/*
1 
0 1 
1 0 1 
0 1 0 1 
*/
#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cout << "Enter the value of n : ";
    cin >> n;

    for(int i = 1; i <= n; i++) {
        int val = i % 2;
        for(int j = 1; j <= i; j++) {
            cout << val << " ";
            val = 1 - val;
            
            // this logic for 0 as first
            // cout << (i + j) % 2 << " ";
        }
        cout << endl;
    }
    return 0;
}