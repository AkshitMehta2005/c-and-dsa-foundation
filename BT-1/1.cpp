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
    if(root==NULL){return;}
    cout<<root->value<<" ";
    displaytree(root->left);
    displaytree(root->right);
}
int sumtree(node*root){
    if(root==NULL)return 0;
    int ans = root->value + sumtree(root->left) + sumtree(root->right);
    return ans;
}
int size(node*root){
if(root==NULL)return 0;
return 1+size(root->left) + size(root->right);
}
int maxnode(node*root){
    if(root==NULL)return INT_MIN;
    int leftmax = maxnode(root->left);
    int rightmax = maxnode(root->right);
    return max((root->value),max(leftmax,rightmax));
}
int levels(node*root){
    if(root==NULL)return 0;
    int leftmax = levels(root->left);
    int rightmax = levels(root->right);
    return 1+max(leftmax,rightmax);
}
int root(int val){
    if(root=NULL)return 0;
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
    displaytree(a);
    cout<<endl;
    cout<<sumtree(a);
    cout<<endl;
    cout<<size(a)<<endl;
    cout<<maxnode(a)<<endl;
    cout<<levels(a);
return 0;
}

// leet 543