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
void display(node*head){
    node*temp = head;
    while(temp!=NULL){
        cout<<temp->value<<" ";
        temp = temp->next;
    }
}
node*deletenode(node*head,int targetval){
if(head->value==targetval){
    head = head->next;
    return head;
}
node*temp = head;
while(temp->next->value!=targetval){
    temp = temp->next;
}
temp->next = temp->next->next;
return head;
}
int main(){
node*a = new node(10);
node*b = new node(20);
node*c = new node(30);
node*d = new node(40);
node*e = new node(50);
a->next = b;
b->next = c;
c->next = d;
d->next = e;
node*head = a;
display(head);
cout<<endl;
head = deletenode(head,30);
display(head);
}

//leeet code 237 reviewv//876//19//160//141