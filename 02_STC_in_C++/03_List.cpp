#include<iostream>
#include <list>


using namespace std;

int main () {

    // creation of list
    list<int> ls;

    ls.push_back(1);
    ls.emplace_back(2);
    for(auto i : ls) {
        cout << i << " ";
    }
    cout << endl;

    ls.push_front(5);
    for(auto i : ls) {
        cout << i << " ";
    }
    cout << endl;

    ls.emplace_front(); 
    for(auto i : ls) {
        cout << i << " ";
    }
    cout << endl;

    ls.push_back(3);
    for(auto i : ls) {
        cout << i << " ";
    }
    cout << endl;

    ls.emplace_back();
    for(auto i : ls) {
        cout << i << " ";
    }
    cout << endl;

    return 0;
}