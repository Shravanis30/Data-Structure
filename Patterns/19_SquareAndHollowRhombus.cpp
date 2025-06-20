/*
* * * * * * * * 
* * *     * * * 
* *         * * 
*             * 
*             * 
* *         * * 
* * *     * * * 
* * * * * * * * 
*/
#include <bits/stdc++.h>
using namespace std;

int main() {

    int n;
    cout << "Enter the value of n : ";
    cin >> n;

    int inis = 0;
    for(int i = n; i >= 1; i--) {
        // star
        for(int j = 1; j <= i; j++) {
            cout << "*" << " ";
        }

        // space
        for(int j = 1; j <= inis; j++) {
            cout << "  ";
        }

        // star
        for(int j = 1; j <= i; j++) {
            cout << "*" << " ";
        }
        inis +=2; // increment the spaces
        cout << endl;
    }

    int incrementspace = n*2 - 1;
    for(int i = 1; i <= n; i++) {
        // star
        for(int j = 1; j <= i; j++) {
            cout << "*" << " ";
        }

        // space
        for(int j = 1; j <= incrementspace -1; j++) {
            cout << "  ";
        }

        // star
        for(int j = 1; j <= i; j++) {
            cout << "*" << " ";
        }

        incrementspace -= 2;
        cout << endl;

    }
    
    return 0;
}