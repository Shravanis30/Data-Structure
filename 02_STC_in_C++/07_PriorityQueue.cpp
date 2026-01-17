#include <iostream>
using namespace std;

int main() {
    // Max heap
    priority_queue<int> pq;

    pq.push(5);
    pq.push(8);
    pq.push(2);
    pq.emplace(10);
    cout << pq.top() << endl;

    pq.pop();
    cout << pq.top() << endl;

    // Minimum Heap
    priority_queue<int, vector<int>, greater<int>> pq1;
    pq1.push(5);
    pq1.push(8);
    pq1.push(2);
    pq1.emplace(10);
    cout << pq1.top() << endl;

    pq1.pop();
    cout << pq1.top() << endl;



    // push = O(log(n))
    // top = O(1)
    // pop = O(log(n))
    return 0;
}