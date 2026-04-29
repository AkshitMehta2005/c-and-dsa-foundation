//reverse the stack
#include <iostream>
#include <stack>
using namespace std;
int main()
{
    stack<int> st;
    st.push(10);
    st.push(20);
    st.push(30);
    st.push(40);
    st.push(50);
    stack<int>bt1 ;
    while(st.size()>0){
        cout<<st.top()<<" ";
        bt1.push(st.top());
        st.pop();
    }
    cout<<endl;
    stack<int>bt2;
    while(bt1.size()>0){
        cout<<bt1.top()<<" ";
        bt2.push(bt1.top());
        bt1.pop();
    }
    cout<<endl;
    while(bt2.size()>0){
        cout<<bt2.top()<<" ";
        st.push(bt2.top());
        bt2.pop();
    }
   // cout<<st.top();
    return 0;
}


