/*
        A 
      A B A 
    A B C B A 
  A B C D C B A 
*/
#include <bits/stdc++.h>
using namespace std;

int main() {

    int n;
    cout << "Enter the value of n : ";
    cin >> n;

    for(int i = 1; i <= n; i++) {
        for(int j = 1; j <= n-i+1; j++) {
            cout << "  ";
        }

        char ch = 'A';
        int breakpoint = (2*i - 1) / 2;
        for(int j = 1; j <= 2*i - 1; j++) {
            cout << ch << " ";
            if(j <= breakpoint) {
                ch++;
            } else {
                ch--;
            }
        }

        cout << endl;

    }
    return 0;
}