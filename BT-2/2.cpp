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

void nthlevelprint(int curr, int l, node* root) {
    if (root == NULL) return;
    
    if (curr == l) { // Check first before recursive calls
        cout << root->value << " ";
        return;
    }

    nthlevelprint(curr + 1, l, root->left);
    nthlevelprint(curr + 1, l, root->right);
}

int levels(node* root) { 
    if (root == NULL) return 0;
    return 1 + max(levels(root->left), levels(root->right));
}

void levelorder(node* root) {
    int h = levels(root);
    for (int i = 0; i < h; i++) {
        nthlevelprint(0, i, root);  // Start from level 0
        cout << endl;
    }
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
    levelorder(a);
    
return 0;
}