/*
A 
A B 
A B C 
A B C D 
*/
#include <bits/stdc++.h>
using namespace std;

int main() {

    int n;
    cout << "Enter the value of n : ";
    cin >> n;

    for(int i = 1; i <= n; i++) {
        for(char ch = 'A'; ch <= 'A' + i - 1; ch++) {
            cout << ch << " ";
        }
        cout << endl;
    }
    return 0;
}