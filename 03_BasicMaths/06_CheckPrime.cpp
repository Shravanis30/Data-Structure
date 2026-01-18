
#include<iostream>
#include<math.h>
using namespace std;

int main() {

    int n;
    cout << "Enter the Number : ";
    cin >> n;

    int count = 0;

    for(int i = 1; i <= sqrt(n); i++) {
        if(i == 1) {
            cout << "1 is nor prime nor composite" << endl;
        }
        if(i < 0) {
            cout << "Enter positive value" << endl;
        }
        if(n % i == 0) {
            count++;
            if((n/i) != i){
                count++;
            }
        }
    }

    if(count<=2) {
        cout << n << " is a prime number" << endl;
    }
    else {
        cout << n << " is not a prime number" << endl;

    }

}