// linklist implitation
// 622 leet code
#include<iostream>
using namespace std;
class node{ //user define data type
public:
int value;
node*next;
node(int value){
    this->value = value;
    this->next = NULL;
}
};
class queue{
public:
    node*head;
    node*tail;
    int s;
    queue(){
        head = tail = NULL;
        s = 0;
    }
void push(int value){
   node*temp = new node(value);
   if(s==0)head = tail = temp;
   else{
    tail->next = temp;
    tail = temp;
   }
   s++;
}
void pop(){
    if(s==0){
        cout<<"queue is empty";
        return;
    }
    node*temp = head;
    head = head->next;
    s--;
    delete(temp); // wastage nahi ho gi
}
int front(){
     if(s==0){
        cout<<"queue is empty";
        return -1;
     }
     else return head->value;
}
int back(){
     if(s==0){
        cout<<"queue is empty"<<endl;
        return -1;
     }
     else return tail->value;
}
void display(){
   node*temp = head;
   while(temp!=NULL){
    cout<<temp->value<<" ";
    temp = temp->next;
   }
   cout<<endl;
}
int size(){
    return s;
}
bool empty(){
    if(s==0)return true;
    else return false;
}
};
int main(){
    queue q;
    q.push(10);
    q.push(20);
    q.push(30);
    q.push(40);
    q.display();
    q.push(50);
    q.push(60);
    q.display();
    q.pop();
    q.display();
}