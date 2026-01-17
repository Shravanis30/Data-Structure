#include <iostream>
#include <set>
using namespace std;

// inserted in sorted array but not unqiue

int main() {

    multiset<int>ms;
    ms.insert(1);
    ms.insert(1);
    ms.insert(1);
    ms.emplace(1);
    ms.emplace(2);
    ms.emplace(2);
    ms.emplace(2);
    ms.emplace(2);
    ms.emplace(3);
    ms.emplace(3);
    ms.emplace(3);
    ms.emplace(3);
    for(auto i : ms){
        cout << i << " ";
    }
    cout << endl;
    cout << ms.count(1) << endl;


    ms.erase(1); // will erase all one
    for(auto i : ms){
        cout << i << " ";
    }
    cout << endl;
    cout << ms.count(1) << endl;

    ms.erase(ms.find(2)); // it will erase 1st occurence of 2
    for(auto i : ms){
        cout << i << " ";
    }
    cout << endl;

    // ms.erase(ms.find(3), ms.find(3)+2);
    // for(auto i : ms){
    //     cout << i << " ";
    // }
    // cout << endl;

    return 0;
}