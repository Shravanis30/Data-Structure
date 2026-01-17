#include <iostream>
using namespace std;

int main () {

    deque<int> dq;
    dq.push_back(1);
    dq.push_back(2);
    dq.emplace_back(3);
    dq.emplace_back(4);
    for(auto i : dq) {
        cout << i << " ";
    }
    cout << endl;

    dq.push_front(2);
    for(auto i : dq) {
        cout << i << " ";
    }
    cout << endl;
    
    dq.emplace_front(3);
    for(auto i : dq) {
        cout << i << " ";
    }
    cout << endl;
    
    dq.pop_back();
    for(auto i : dq) {
        cout << i << " ";
    }
    cout << endl;
    
    dq.pop_front();
    for(auto i : dq) {
        cout << i << " ";
    }
    cout << endl;
    
    cout << dq.back() << endl;    
    cout << dq.front() << endl;
    
    


    return 0;
}