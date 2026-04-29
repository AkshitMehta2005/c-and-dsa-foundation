// leetcode 144 // 94 
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
void preorder(node*root){ // root left right
    if(root==NULL)return; // base case
    cout<<root->value<<" ";//work
    preorder(root->left);//call 1
    preorder(root->right);// call 2
}
void inorder(node*root){ // left root right
    if(root==NULL)return; // base case
    inorder(root->left);//call 1
    cout<<root->value<<" ";//work
    inorder(root->right);// call 2
}
void postorder(node*root){ // left  right root
    if(root==NULL)return; // base case
    postorder(root->left);//call 1
    postorder(root->right);// call 2
    cout<<root->value<<" ";//work
}
void nthlevelprint(node*root,int curr,int levels){
    if(root==NULL)return;
    if(curr==levels){
        cout<<root->value<<" ";
        return;
    }
    nthlevelprint(root->left,curr+1,levels);
    nthlevelprint(root->right,curr+1,levels);
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
    preorder(a);
    // cout<<endl;
    // inorder(a);
    // cout<<endl;
    // postorder(a);
    // nthlevelprint(a,0,2);  // 0 level se satrt hora ha
return 0;
}