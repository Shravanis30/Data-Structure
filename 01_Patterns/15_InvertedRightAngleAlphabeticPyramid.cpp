/*
A B C D 
A B C 
A B 
A 
*/
#include <bits/stdc++.h>
using namespace std;

int main() {


    int n;
    cout << "Enter the value of n : ";
    cin >> n;

    for(int i = n; i >= 1; i--) {
        for(char ch = 'A'; ch <= 'A' +(i - 1) ; ch++) {
            cout << ch << " ";
        }
        cout << endl;
    }
    return 0;
}