/*
#include<iostream>
#include<vector>
using namespace std;
void display(vector<int>&a){
    for(int i = 0;i<a.size();i++){
     cout<<a[i]<<" ";
    }
    cout<<endl;
}
int main(){
    vector<int>v;
    v.push_back(4);
    v.push_back(2);
    v.push_back(3);
    v.push_back(4);
    display(v);
    int j;
    for(int i = 0, j = v.size()-1;i<=j;i++,j--){
        int temp = v[i];
        v[i] = v[j];
        v[j] = temp;
    }
    display(v);
    return 0;
}
*/

// part of reverse
#include<iostream>
#include<vector>
using namespace std;
void display(vector<int>&a){
    for(int i = 0;i<a.size();i++){
     cout<<a[i]<<" ";
    }
    cout<<endl;
}
void revdisplay(int i,int j,vector<int>&v){
 while(i<=j){
    int temp = v[i];
    v[i] = v[j];
    v[j] = temp;
    i++;
    j--;
 }
 return ;
    }
int main(){
    vector<int>v;
    v.push_back(1);
    v.push_back(2);
    v.push_back(3);
    v.push_back(4);
    display(v);
    revdisplay(0,2,v);
    display(v);
    return 0;
}
