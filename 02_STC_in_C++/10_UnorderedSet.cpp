#include <iostream>
#include <set>
#include <unordered_set>
using namespace std;

// inserted in unsorted array but unqiue
// lowerbound and upper bound do not work
// all operations in O(1) & in worst case O(n) (this is once in a million time )
int main() {

    unordered_set<int>un;
    un.insert(1);
    un.insert(9);
    un.insert(1);
    un.emplace(1);
    un.emplace(2);
    un.emplace(6);
    un.emplace(2);
    un.emplace(2);
    un.emplace(7);
    un.emplace(3);
    un.emplace(9);
    un.emplace(3);
    for(auto i : un){
        cout << i << " ";
    }
    cout << endl;
    cout << un.count(1) << endl;


    un.erase(1); // will erase all one
    for(auto i : un){
        cout << i << " ";
    }
    cout << endl;
    cout << un.count(1) << endl;

    un.erase(un.find(2)); // it will erase 1st occurence of 2
    for(auto i : un){
        cout << i << " ";
    }
    cout << endl;

   

    return 0;
}