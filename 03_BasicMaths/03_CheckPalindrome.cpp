
#include <iostream>
#include<math.h>
using namespace std;

int main() {

    int n;
    cout << "Enter value to count digits : ";
    cin >> n;

    int original_Number = n;

    int rev = 0;
    while(n > 0) {
        int digit = n % 10;
        rev = rev * 10 + digit;
        n = n/10;
    }
    if( rev == original_Number) {
        cout << original_Number << " is a Palindrome Number" << endl;
    } else {
        cout << original_Number << " is not a Palindrome Number" << endl;
    }

}