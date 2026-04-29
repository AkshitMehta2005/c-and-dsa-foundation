#include <iostream>
#include <stack>
using namespace std;
int main()
{
    stack<int> st;
    cout << st.size() << endl;
    st.push(10);
    st.push(20);
    st.push(30);
    st.push(40);
    st.push(50);
    cout << st.size() << endl;
    st.pop();
    cout << st.size() << endl;
    cout << st.top() << endl; // last wala kyuki top mai hoga
    // for print the stack
    stack<int> temp;
    while (st.size() > 0)
    {
        cout << st.top() << " ";
        temp.push(st.top());
        st.pop();
    }
    // for store the stack
    while (temp.size() > 0)
    {
        st.push(temp.top());
        temp.pop();
    }
    cout << endl;
    cout << st.top();
    return 0;
}

// home work print same arrgagement in another container