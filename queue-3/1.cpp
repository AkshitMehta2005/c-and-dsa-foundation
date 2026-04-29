// Interleave the first half of the queue with second half
#include <iostream>
#include <queue>
#include <stack>
using namespace std;
void display(queue<int> &q)
{
    for (int i = 0; i < q.size(); i++)
    {
        int x = q.front();
        cout << x << " ";
        q.pop();
        q.push(x);
    }
    cout << endl;
}
void reorder(queue<int> &q) {
    stack<int> st;
    int n = q.size();

    // pop 1st half of the queue into the stack
    for (int i = 0; i < n / 2; i++) {
        st.push(q.front());
        q.pop();
    }

    // empty the stack into q
    while (!st.empty()) {
        q.push(st.top());
        st.pop();
    }

    // pop 2nd half (now the first half) of the queue to the stack
    for (int i = 0; i < n / 2; i++) {
        st.push(q.front());
        q.pop();
    }

    // Interleave one by one
    while (!st.empty()) {
        q.push(st.top());
        st.pop();
        q.push(q.front());
        q.pop();
    }

    // Reverse the queue using the stack
    while (!q.empty()) {
        st.push(q.front());
        q.pop();
    }
    while (!st.empty()) {
        q.push(st.top());
        st.pop();
    }
}

int main()
{
    queue<int> q;
    q.push(11);
    q.push(12);
    q.push(13);
    q.push(14);
    q.push(15);
    q.push(16);
    q.push(17);
    q.push(18);
    q.push(18);
    q.push(20);
    display(q);
    reorder(q);
    display(q);
    return 0;
}
//950