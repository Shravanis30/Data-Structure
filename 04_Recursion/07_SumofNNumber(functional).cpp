
#include<iostream>
#include<math.h>
using namespace std;

int Display(int n) {

    if(n == 0) {
        return 0;
    }

    return n + Display(n - 1);

}

int main() {

    int n;
    string name;
    cout << "Enter the value : ";
    cin >> n;

    cout << "sum = " << Display(n) << endl;

   return 0;

}