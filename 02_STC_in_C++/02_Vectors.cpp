#include <iostream>
using namespace std;

int main () {

    // creation of vectors
    vector<int> v;
    // push_back and emplace_back works same of adding element at last 
    v.push_back(1);
    v.emplace_back(2);   // much standard 

    for( int x: v) {
        cout << x << " ";
    }
    cout << endl;


    // use of vectors using pairs
    vector<pair<int, int>> v1;
    v1.push_back({1,2});
    v1.emplace_back(3,4);  // no need to add {} 

    for(auto y: v1) {
        cout << y.first << " " << y.second << " ";
    }
    cout << endl;


    // empty vector is initialzed as 0
    // even if size of vector is pridefined it is still dynamic in nature
    vector<int>v2(5);
    for( int z: v2) {
        cout << z << " ";
    }
    cout << endl;

    vector<int> v3(5,20);
    for( int a: v3) {
        cout << a << " ";
    }
    cout << endl;

    v3.emplace_back(1);  // still dynamic
    for( int a: v3) {
        cout << a << " ";
    }
    cout << endl;


    // How to access the elements in vector
    cout << v[0] <<endl;
    cout << v1[0].first << " " << v1[0].second << endl;  //pairs

    vector<int>v4;
    v4.emplace_back(51);
    v4.emplace_back(52);
    v4.emplace_back(53);
    v4.emplace_back(54);
    v4.emplace_back(55);
    // iterator points to the memory location of the element
    vector<int>::iterator it = v4.begin();
    it++;
    // * gives the element value of the memory location
    cout << *(it) << endl;
    it += 2;
    cout << *(it) << endl;


    // end : it point to the location after the last element
    vector<int> :: iterator it1 = v4.end();
    cout << *(it1) << endl;  
    it1--;
    cout << *(it1) << endl;
    // vector<int> :: iterator it2 = v4.rend();        never used
    // vector<int> :: iterator it3 = v4.rbegin();      never used

    
    // Printing the vector
    for(vector<int> :: iterator it2 = v4.begin(); it2 != v4.end(); it2++) {
        cout << *(it2) << " ";
    }
    cout << endl;

    // use auto to automatically assign vector
    for(auto it3 = v4.begin(); it3 != v4.end(); it3++) {
        cout << *(it3) << " ";
    }
    cout << endl;
    
    // for each loop
    for(auto b: v4) {
        cout << b << " ";
    }
    cout << endl;




    // deleting element in vector
    v4.erase(v4.begin()+1);   // deleting single element
    for(auto b: v4) {
        cout << b << " ";
    }
    cout << endl;

    //deleting multiple element
    v4.erase(v4.begin() +1, v4.end() -1);
    for(auto b: v4) {
        cout << b << " ";
    }
    cout << endl;


    // insertion of element in vector
    vector<int>w(2,100);
    for(auto c: w) {
        cout << c << " ";
    }
    cout << endl;

    w.insert(w.begin(), 300);  // insert single element
    for(auto c: w) {
        cout << c << " ";
    }
    cout << endl;

    w.insert(w.begin()+1, 2, 200);   // insert multiple element
    for(auto c: w) {
        cout << c << " ";
    }
    cout << endl;



    // // copying vector.    (rarely used)
    // vector<int> copy(2,50);
    // w.insert(v.begin(), copy.begin(), copy.end());
    

    // size of vector
    cout << w.size() << endl;

    //pop_back remove last element
    w.pop_back();
    for(auto c: w) {
        cout << c << " ";
    }
    cout << endl;

    // swaping of vectors
    v.swap(w);
    for(auto c: w) {
        cout << c << " ";
    }
    cout << endl;

    // clearing vector
    w.clear();
    for(auto c: w) {
        cout << c << " ";
    }
    cout << endl;


    cout << w.empty() << endl;
    cout << v.empty() << endl;
    return 0;
}