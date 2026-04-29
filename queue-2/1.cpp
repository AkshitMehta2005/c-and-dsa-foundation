// reverse the k element in the queue
// 1700 leetcode
//232. 
#include <queue>
#include <stack>
#include <iostream>
using namespace std;

int main() {
    queue<int> q;
    q.push(10);
    q.push(20);
    q.push(30);
    q.push(40);
    q.push(50);
    int n = 5; // size
    int k = 2; // kth element reverse
    stack<int> st;
    // pop and store in stack the kth element
    for (int i = 0; i < k; i++) {
        st.push(q.front());
        q.pop();
    }
    // push the kth element in the stack
    while (!st.empty()) {
        q.push(st.top());
        st.pop();
    }
    for (int i = 0; i < n - k; i++) {
        q.push(q.front());
        q.pop();
    }
    // printing
    while (!q.empty()) {
        cout << q.front() << " ";
        q.pop(); // karna hita ha kyuki nahi toh infince chal jata ha
    }
    return 0;
}