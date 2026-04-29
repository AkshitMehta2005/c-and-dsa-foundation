// print itteratively
#include<stack>
#include<iostream>
#include<queue>
#include<climits>
using namespace std;
#include<iostream>
#include<queue>
#include<climits>
using namespace std;

class node {
public:
    int value;
    node* left;
    node* right;
    node(int val) {
        this->value = val;
        this->left = NULL;
        this->right = NULL;
    }
};
void preorder(node*root){
    stack<node*>st;
    st.push(root);
    while(st.size()!=0){
        node*temp = st.top();
        st.pop();
        cout<<temp->value<<" ";
        if(temp->right!=NULL)st.push(temp->right);
        if(temp->left!=NULL)st.push(temp->left);
    }
}
void displaytree(node*root){
    if(root==NULL){return;}
    cout<<root->value<<" ";
    displaytree(root->left);
    displaytree(root->right);
}



int main(){
    node*a = new node(1); 
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
return 0;
}

