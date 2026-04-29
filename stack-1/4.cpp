// push at any index
#include <iostream>
#include <stack>
using namespace std;
void print(stack<int> &st){
    stack<int> temp;
    while (st.size() > 0)
    {    cout<<st.top()<<" ";
         temp.push(st.top());
        st.pop();
    }
    // for store the stack
    while (temp.size() > 0)
    {   
        st.push(temp.top());
        temp.pop();
    }
}

void pushatidx(stack<int>& st,int idx,int val){
    stack<int>temp;
    // 2nd tak index le gye
    while(st.size()>idx){
        temp.push(st.top());
        st.pop();
    }
    st.push(val);
    while(temp.size()>0){
        st.push(temp.top());
        temp.pop();
    }
}
int main()
{
    stack<int> st;
    st.push(10);
    st.push(20);
    st.push(30);
    st.push(40);
    st.push(50);
    print(st);
    cout<<endl;
    pushatidx(st,2,90);
    print(st);
    return 0;
}
