// stack by using linklist

#include<iostream>
using namespace std;
class node{
public:
int val;
node*next;
node(int value){
    this->val = value;
    this->next = NULL;
}
};

class stack{
public:
node * head;
int size;
stack(){
    head = NULL;
    size = 0;
}
void push(int val){
    node*temp = new node(val);
    temp->next = head;
    head = temp;
    size++;
}
void pop(){
    if(head==NULL){
        cout<<"stack is empty"<<endl;
        return;
    }
    head = head->next;
    size--;
}
int top(){
    if(head==NULL){
        cout<<"stack is empty"<<endl;
        return - 1;
    }
return head->val;
}
void print(node*temp){
    if(temp==NULL)return;
    print(temp->next);
    cout<<temp->val<<" ";
}
void display(){
    node*temp = head;
    print(temp);
    cout<<endl;
}
};
int main(){
stack st;
st.push(1);
st.push(2);
st.push(3);
st.push(4);
st.push(5);
st.display();
return 0;
}