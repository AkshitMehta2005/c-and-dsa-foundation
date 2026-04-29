//Find the nodes with minimum and maximum value in a Binary Search Tree.

#include<iostream>
#include<climits>
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
void displaytree(node*root){
    if(root==NULL){return ;}
    cout<<root->value<<" ";
    displaytree(root->left);
    displaytree(root->right);
}

void maxAndmin(node* root) {

int mn = root->value;
int mx = root->value;
node* temp = root;
while(temp->left) {
temp = temp->left;
mn = temp->value;
}
while(root->right) {
root = root->right;
mx = root->value;
}
cout << mn << " " << mx << "\n";

}

int main(){
    node*a = new node(8); // root node
    node*b = new node(6);
    node*c = new node(11);
    node*d = new node(5);
    node*e = new node(7);
    node*f = new node(10);
    node*g = new node(12);
    a->left = b;
    a->right = c;
    b->left = d;
    b->right = e;
    c->left = f;
    c->right = g;
    maxAndmin(a);
return 0;
}

