// display queue
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

int rev(queue<int> &q)
{
    stack<int> st;
    // empty the queue into stack
    while (q.size() != 0)
    {
        int x = q.front();
        q.pop();
        st.push(x);
    }
    // stack into queue
    while (st.size() != 0)
    {
        int x = st.top();
        st.pop();
        // cout<<x<<" ";
        q.push(x);
    }
}
// reverse by recursion
void revdisplay(queue<int> &q){
    if(q.size()==0)return;
    // store the elememt
    int x = q.front();
    //pop karo
    q.pop();
    //functioin
    revdisplay(q);
    q.push(x);
}
int main()
{
    queue<int> q;
    q.push(10);
    q.push(20);
    q.push(30);
    q.push(40);
    q.push(50);
    display(q);
    // q.pop();
   // rev(q);
    revdisplay(q);
    display(q);
    return 0;
}