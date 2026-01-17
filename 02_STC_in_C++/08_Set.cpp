#include <iostream>
#include <set>
using namespace std;
// set sortes everything in a sorted order and unique
// all operation occurs in log(n) time complexity

// lower bound upper bound
int main() {

    set<int>st;
    st.insert(1);
    st.insert(1);
    st.insert(2);
    st.emplace(4);
    st.insert(3);
    st.emplace(3);


    for(auto i : st) {
        cout << i << " ";
    }
    cout << endl;
    auto it = st.find(3);

    st.erase(1);
    for(auto i : st) {
        cout << i << " ";
    }
    cout << endl;


    auto it1 = st.find(3);
    st.erase(it1);
    for(auto i : st) {
        cout << i << " ";
    }
    cout << endl;

    int count = st.count(1);
    cout << count << endl;


    set<int>st1;
    st1.insert(1);
    st1.insert(2);
    st1.insert(3);
    st1.emplace(4);
    st1.insert(5);
    st1.emplace(6);
    for(auto i : st1) {
        cout << i << " ";
    }
    cout << endl;

    auto it2 = st1.find(2);
    auto it3 = st1.find(5);
    st1.erase(it2, it3);
    for(auto i : st1) {
        cout << i << " ";
    }
    cout << endl;

    return 0;
}