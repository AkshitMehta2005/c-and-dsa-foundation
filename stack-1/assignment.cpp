// Remove kth element from top in a given stack.
#include<iostream>
#include<stack>
using namespace std;

void remove(stack<int> & st,int k){
stack<int>temp;
k = k - 1 ;
while(k--){
    temp.push(st.top());
    st.pop();
}
st.pop();
while(!temp.empty()){
    st.push(temp.top());
    temp.pop();
}
}

int main(){
    stack<int>st;
    st.push(1);
    st.push(2);
    st.push(3);
    st.push(4);
    st.push(5);
    remove(st,3); // matlab k -1 tak muje loop chalana hoga
    while(!st.empty()){
        cout<<st.top()<<" ";
        st.pop();
    }
return 0;
}