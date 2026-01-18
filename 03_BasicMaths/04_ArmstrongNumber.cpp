#include<iostream>
#include<math.h>
using namespace std;

int main() {

    int n;
    cout << "Enter value to check Armstrong Number : ";
    cin >> n;

    int original_Num = n;
    int sum = 0;
    while(n>0) {
        int digit = n % 10;
        sum = sum + pow(digit, 3);
        n = n / 10;
    }

    if(sum == original_Num) {
        cout << original_Num << " is a Armstrong Number" << endl;
    } else {
        cout << original_Num << " is not a Armstrong Number" << endl;
    }

}