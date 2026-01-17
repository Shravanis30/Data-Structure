#include<iostream>
#include <map>
#include<unordered_map>
using namespace std;

// stores in sorted and unique order
int main() {

    map<int, int> mpp;
    // ways to insert
    mpp.insert({3,1});

    mpp[1] = 2;
    mpp.emplace(2,3);
    
    mpp.insert({3,1});
    for(auto i : mpp) {
        cout << i.first << " " << i.second << "\t";
    }
    cout << endl;


    map<int, pair<int, int>>mpp1;
    // mpp[4,2] = 10;

    auto it = mpp.find(3);
    cout << it.second << endl;


    // multimap. : same as map but STORES DUPLICATE KEYS BUT IN SORTED ORDER

    // unorderedmap : same as map but STORES UNIQUE KEYS BUT IN UNSORTED ORDER

    return 0;

}