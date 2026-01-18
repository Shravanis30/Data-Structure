#include<iostream>
#include<math.h>
using namespace std;

int main() {

    int n;
    cout << "Enter the Number : ";
    cin >> n;

    cout << "Divisors :- ";
    for(int i = 1; i <= n; i++) {
        if(n % i == 0) {
            cout << i << " ";
        }
    
    }
    cout << endl;

}