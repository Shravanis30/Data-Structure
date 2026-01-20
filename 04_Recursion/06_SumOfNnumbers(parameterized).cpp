
#include<iostream>
#include<math.h>
using namespace std;

void Display(int n, int sum) {

    if(n == 0) {
        cout << sum << endl;
        return;
    }

    Display(n - 1, sum + n);  

}

int main() {

    int n;
    string name;
    cout << "Enter the value : ";
    cin >> n;

    Display(n, 0);

   return 0;

}