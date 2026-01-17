// in this prorgam there is the use of pair in the c++

// #include <bits/stdc++.h>
#include <iostream>
using namespace std;

int main() {

    // when declaring 2 variables at once in pair
    pair<int, int> a = {5, 9};
    cout << "1st no = " << a.first << " 2nd no = " << a.second << endl;

    // when declaring 3 variables at once as a pair
    pair<int, pair<int, int>>b = {12, {7, 4}};
    cout << "1st no = " << b.first << " 2nd of 1st no = " << b.second.first << " 2nd of 2nd no = " << b.second.first << endl;

    // when declaing pairs in the array
    pair<int , int> arr[] = {{12, 23}, {23, 45}, {34, 45}, {65, 78}};
    cout << "Last arr 1st no = " << arr[3].first << " 2nd arr 2nd no = " << arr[1].second << endl;

    // pairs can used in nested way as per the requiremnt
    return 0;

}