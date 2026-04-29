// levels order traversal by using queue (bfs)
#include<iostream>
#include<queue>
using namespace std;
class node{
public:
int value;
node*left;
node*right;
node(int val){
    this->value = val;
    this->left = NULL;
    this->right = NULL;
}
};
void levelorderqueue(node*root){
    queue<node*>q;
    q.push(root);
    while(q.size()>0){
        node*temp = q.front();
       q.pop();
       cout<<temp->value<<" ";
       if(temp->left!=NULL)q.push(temp->left);
       if(temp->right!=NULL)q.push(temp->right);

    }
    cout<<endl;
}
void levelorderqueuereverse(node*root){
    queue<node*>q;
    q.push(root);
    while(q.size()>0){
        node*temp = q.front();
        q.pop();
        cout<<temp->value<<" ";
        if(temp->right!=NULL)q.push(temp->right);
        if(temp->left!=NULL)q.push(temp->left);
    }
    cout<<endl;
}

int main(){
    node*a = new node(1); // root node
    node*b = new node(2);
    node*c = new node(3);
    node*d = new node(4);
    node*e = new node(5);
    node*f = new node(6);
    node*g = new node(7);
    a->left = b;
    a->right = c;
    b->left = d;
    b->right = e;
    c->left = f;
    c->right = g;
    levelorderqueue(a);
    // levelorderqueuereverse(a);
return 0;
}