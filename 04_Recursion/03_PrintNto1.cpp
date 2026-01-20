 
#include<iostream>
#include<math.h>
using namespace std;

void Display(int n){

    if(n == 0) {
        return;
    }

    cout << n << endl;

    Display(n - 1);

}

int main() {

    int n;
    string name;
    cout << "Enter the value : ";
    cin >> n;

    Display(n);

   return 0;

}