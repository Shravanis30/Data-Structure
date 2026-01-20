
#include<iostream>
#include<math.h>
using namespace std;

void Display(int i, int n, string name){

    if(i>n) {
        return;
    }

    cout << name << endl;

    Display(i + 1, n, name);
}

int main() {

    int n;
    string name;
    cout << "Enter the value to print name : ";
    cin >> n;

    cout << "Enter your name : ";
    cin >> name;

    Display(1, n, name);

   return 0;

}