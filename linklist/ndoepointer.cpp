#include<iostream>
using namespace std;

class node{
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

int size(node*head){
    node*temp = head;
    int n = 0;
    while(temp!=NULL){
        temp = temp->next;
        n++;
    }
    return n;
}
void displayrec(node* head){
    if(head==NULL)return;
   
    displayrec(head->next);
     cout<<head->value<<" ";
}
int main(){
node*a = new node(10);
node*b = new node(20);
node*c = new node(30);
node*d = new node(40);
a->next = b;
b->next = c;
c->next = d;
display(a);
cout<<endl;
//cout<<size(a);
displayrec(a);
return 0;
}