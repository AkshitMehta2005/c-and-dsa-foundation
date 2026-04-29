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

int product(node*root){
     if(root==NULL){return 1;}
     int p = 1;
     p = root->value * product(root->left) * product(root->right);
     return p;
}

int minimum(node*root){
    if(root==NULL)return INT_MAX;
    return min(root->value,(min(minimum(root->left),minimum(root->right))));
}

int levels(node*root){
    if(root==NULL)return 0;
    return 1 + max(levels(root->right),levels(root->left));
}

bool balancedBt(node*root){
    if(root==NULL)return true;
    int lst = levels(root->left);
    int rst = levels(root->right);

    int a = abs(lst-rst);

    if(a>1)return false;
    bool leftst = balancedBt(root->left);
    if(leftst==false)return false;
    bool rightst = balancedBt(root->right);
    if(rightst==false)return false;
     return true;
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
    // displaytree(a);
    // cout<<product(a);
    // cout<<minimum(a);
     cout<<balancedBt(a);
}