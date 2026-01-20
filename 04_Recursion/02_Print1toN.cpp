
#include<iostream>
#include<math.h>
using namespace std;

void Display(int n, int count){

    if(count > n) {
        return;
    }

    cout << count << endl;

    Display(n, count + 1);

}

int main() {

    int n;
    string name;
    cout << "Enter the value : ";
    cin >> n;

    Display(n, 1);

   return 0;

}