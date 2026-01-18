// #include<iostream>
// #include<math.h>
// using namespace std;

// int main() {

//     int n;
//     cout << "Enter the Number : ";
//     cin >> n;

//     cout << "Divisors :- ";
//     for(int i = 1; i <= n; i++) {
//         if(n % i == 0) {
//             cout << i << " ";
//         }
    
//     }
//     cout << endl;

// }



#include<iostream>
#include<math.h>
using namespace std;

int main() {

    int n;
    cout << "Enter the Number : ";
    cin >> n;

    vector<int> ls;
    cout << "Divisors :- ";
    for(int i = 1; i <= sqrt(n); i++) {
        if(n % i == 0) {
            ls.push_back(i);
            if((n/i) != i) {
               ls.push_back(n/i);

            }
        }

    }

    sort(ls.begin(), ls.end());
        
    for(int it: ls) {
        cout << it << " ";
    }
    cout << endl;

}