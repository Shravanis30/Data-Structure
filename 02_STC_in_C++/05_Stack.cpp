#include <iostream>
using namespace std;

//  all operation in stack are O(1)
int main () {

    stack<int> st;

    st.push(1);
    st.push(2);
    st.push(3);
    st.push(4);
    st.emplace(5);
    cout << st.top() << endl;

    st.pop();
    cout << st.top() << endl;
    
    cout << st.size() << endl;

    cout << st.empty() << endl;

    stack<int> st1, st2;
    st1.swap(st2);

    // cout << st.top() << endl;
    cout << st1.top() << endl;
    return 0;
}