// #include <iostream>
// using namespace std;

// int main() {

//     int n;
//     cout << "Enter value to count digit: ";
//     cin >> n;

//     int count = 0;
//     while(n > 0) {
//         count = count + 1;
//         n = n/10;
//     }
//     cout << "Total digits : " << count << endl;
// }



#include <iostream>
#include<math.h>
using namespace std;

int main() {

    int n;
    cout << "Enter value to count digits : ";
    cin >> n;

    int count =  log10(n) + 1;
    cout << "Total digits : "<< int(count) << endl;
}