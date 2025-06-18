/*
1             1 
1 2         2 1 
1 2 3     3 2 1 
1 2 3 4 4 3 2 1 
*/

#include <bits/stdc++.h>
using namespace std;

int main() {

    int n;
    cout << "Enter the value of n : ";
    cin >> n;

    for(int i = 1; i <= n; i++) {
        // printing numbers
        for(int j = 1; j <= i; j++) {
            cout << j << " ";
        }
        // printing space
        for (int j = 1; j <= 2 * (n - i); j++) {
            cout << "  "; // Two spaces to match number + space width
        }
        // printing numbers
        for (int j = i; j >= 1; j--) {
            cout << j << " ";
        }
        cout << endl;
    }
    
    return 0;
}