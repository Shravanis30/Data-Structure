#include<iostream>
#include<math.h>
using namespace std;

int main() {

    int n1, n2;
    cout << "Enter value of n1 : ";
    cin >> n1;
    cout << "Enter value of n2 : ";
    cin >> n2;

    int GCD = 0;

    for(int i = 1; i <= min(n1, n2); i++) {
        if(n1 % i == 0 && n2 % i == 0) {
            GCD = i;
        }
    }
    cout << "GCD = " << GCD << endl;



}