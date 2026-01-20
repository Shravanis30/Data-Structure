
#include<iostream>
#include<math.h>
using namespace std;

void Display(int n, int count){

    if(count < 1) {
        return;
    }

    Display(n, count - 1);

    cout << count << endl;


}

int main() {

    int n;
    string name;
    cout << "Enter the value : ";
    cin >> n;

    Display(n, n);

   return 0;

}