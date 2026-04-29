#include<iostream>
#include<queue>
#include<climits>
#include<unordered_map>
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

int levels(node*root){
    if(root==NULL)return 0;
    return 1+max(levels(root->left),levels(root->right));
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

void levelorder(node* root) {
    int h = levels(root);
    for (int i = 1; i <= h; i++) {
        nthlevelprint(root, 1, i);
    }
}

void topview(node*root){
  if(root==NULL)return;
  unordered_map<int,int>m; // levels , root->val
  queue< pair<node*,int> > q;
  pair<node*,int> r;
  r.first = root;
  r.second = 0; // 0 level
  q.push(r);
  while(q.size()>0){
    node*temp = (q.front()).first;
    int level = (q.front()).second;
    q.pop();
    if(m.find(level)==m.end()){ // nahi mila
      m[level] = temp->value;
    }

    if(temp->left){
       pair<node*,int> p;
       p.first = temp->left;
       p.second = level - 1;
       q.push(p);
    }

    if(temp->right){
       pair<node*,int> p;
       p.first = temp->right;
       p.second = level + 1;
       q.push(p);
    }

   
  } 

    int minlevel = INT_MAX;
    int maxlevel = INT_MIN;

    for(auto x : m){
      int level = x.first;
      minlevel = min(minlevel,level);
      maxlevel = max(maxlevel,level);
    }

    for(int i = minlevel;i<=maxlevel;i++){
      cout<<m[i]<<" ";
    }
     cout<< endl;
}

int main(){
    int arr[] = {1,2,3,4,5,INT_MIN,6,INT_MIN,INT_MIN,7,8};
    int n = sizeof(arr) / sizeof(arr[0]);
    node* root = construct(arr, n);
    // levelorder(root);
    topview(root);
    return 0;
}
