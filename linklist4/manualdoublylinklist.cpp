#include <iostream>
using namespace std;
class node
{ // user define data type
public:
    int val;
    node *next;
    node *prev;
    node(int val)
    {
        this->val = val;
        this->prev = NULL;
        this->next = NULL;
    }
};
void display(node*head){
while(head!=NULL){
  cout<<head->val<<" ";
  head = head->next;
}
cout<<endl;
}

void displayrev(node*tail){
while(tail!=NULL){
  cout<<tail->val<<" ";
  tail = tail->prev;
}
cout<<endl;
}

int main(){
 node*a = new node(10);
 node*b = new node(20);
 node*c = new node(30);
 node*d = new node(40);
a->next = b;
b->next = c;
c->next = d;

// help to make prev link
d->prev = c;
c->prev = b;
b->prev = a;

display(a);
displayrev(d);
}