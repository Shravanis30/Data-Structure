/*
1 
2 3 
4 5 6 
7 8 9 10 
11 12 13 14 15 
*/
#include <bits/stdc++.h>
using namespace std;

int main() {

    int n;
    cout << "Enter the value of n : ";
    cin >> n;

    int count = 1;
    for(int i = 1; i <= n; i++) {
        
        for(int j = 1; j <= i; j++) {
            cout << count << " ";
            count++;
        }
        cout << endl;
    }
    return 0;
}