#include<iostream>
#include<stack>
using namespace std;

void pushatbottom(stack<int> & st, int val) {
    if(st.empty()) {
        st.push(val);
        return;
    }
    int x = st.top();
    st.pop();
    pushatbottom(st, val);
    st.push(x); 
}

void displayrev(stack<int> & st) {
    if(st.empty()) return;
    int x = st.top();
    cout << x << " ";
    st.pop();
    displayrev(st);
    pushatbottom(st, x);  // this modifies the stack, moving x to the bottom
    // st.push(x);  // ❌ this line is now redundant and causes duplicates
}

int main() {
    stack<int> st;
    st.push(10);
    st.push(20);
    st.push(30);
    st.push(40);
    st.push(50); 

    displayrev(st);
    // orginal stack is also reverse
   
    return 0;
}
