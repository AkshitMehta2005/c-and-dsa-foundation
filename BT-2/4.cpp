// C++ program that constructs a binary tree (BT) from an array and then performs a level-order traversal of the constructed binary tree using a queue.
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
node* construct(int arr[], int n) {
    queue<node*> q;
    node* root = new node(arr[0]);
    q.push(root);
    int i = 1;
    int j = 2;
    while(q.size()>0 && i<n){
        node*temp = q.front();
        q.pop();
        node*l;
        node*r;
        if(arr[i]!=INT_MIN)l = new node(arr[i]);
        else l = NULL;
        if(j!=n && arr[j]!=INT_MIN)r = new node(arr[j]);
        else r = NULL;

        temp->left = l;
        temp->right = r;

        if(l!=NULL)q.push(l);
        if(r!=NULL)q.push(r);
        i = i+2;
        j+= 2;
    }
    return root;
}
void levelorderqueue(node* root) {
    queue<node*> q;
    q.push(root);
    while (!q.empty()) {
        node* temp = q.front();
        q.pop();
        cout << temp->value << " ";
        if (temp->left != NULL) q.push(temp->left);
        if (temp->right != NULL) q.push(temp->right);
    }
    cout << endl;
}

int main() {
    // construct
    int arr[] = {1, 2, 3, 4, 5, INT_MIN, 6, INT_MIN, INT_MIN, 7, 8, 9};
    int n = sizeof(arr) / sizeof(arr[0]);
    node* root = construct(arr, n);
    // levels order traversal
    levelorderqueue(root);

    return 0;
}

// leetcode 988 kar imp hai 
