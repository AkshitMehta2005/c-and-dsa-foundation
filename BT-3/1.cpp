#include <iostream>
#include <queue>
#include <climits>
using namespace std;
// Top View of Binary Tree  gfg -> imp
// Bottom View of Binary Tree -> imp


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
    if (n == 0 || arr[0] == INT_MIN) return NULL;

    queue<node*> q;
    node* root = new node(arr[0]);
    q.push(root);
    int i = 1;

    while (!q.empty() && i < n) {
        node* temp = q.front();
        q.pop();

        if (arr[i] != INT_MIN) {
            temp->left = new node(arr[i]);
            q.push(temp->left);
        }
        i++;

        if (i < n && arr[i] != INT_MIN) {
            temp->right = new node(arr[i]);
            q.push(temp->right);
        }
        i++;
    }
    return root;
}

// Print left boundary (excluding leaves)
void leftBoundary(node* root) {
    if (root == NULL || (root->left == NULL && root->right == NULL)) return;
    cout << root->value << " ";
    if (root->left) leftBoundary(root->left);
    else leftBoundary(root->right);
}

// Print leaf nodes
void bottomBoundary(node* root) {
    if (root == NULL) return;
    if (root->left == NULL && root->right == NULL) {
        cout << root->value << " ";
        return;
    }
    bottomBoundary(root->left);
    bottomBoundary(root->right);
}

// Print right boundary (excluding leaves) in reverse order
void rightBoundary(node* root) {
    if (root == NULL || (root->left == NULL && root->right == NULL)) return;
    if (root->right) rightBoundary(root->right);
    else rightBoundary(root->left);
    cout << root->value << " ";  // Print after recursion for correct order
}

// Print the boundary of the tree
void boundary(node* root) {
    if (root == NULL) return;
    
    cout << root->value << " "; // Root
    
    // Left boundary
    leftBoundary(root->left);
    
    // Leaf nodes
    bottomBoundary(root);
    
    // Right boundary
    rightBoundary(root->right);
}

int main() {
    int arr[] = {20, 8, 22, 4, 12, INT_MIN, 25, INT_MIN, INT_MIN, 10, 14, INT_MIN, INT_MIN, INT_MIN, INT_MIN, INT_MIN, INT_MIN};
    int n = sizeof(arr) / sizeof(arr[0]);
    node* root = construct(arr, n);
    
    cout << "Boundary traversal: ";
    boundary(root);
    
    return 0;
}
