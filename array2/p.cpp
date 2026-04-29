#include<iostream>
#include<vector>
using namespace std;
int main(){
    vector<int>v;
    v.push_back(2);
    v.push_back(3);
    v.push_back(4);
    for(int i = 0;i<v.size();i++){
        cout<<v.at(i)<<" ";
    }
    vector<int>v2(sizeof(v));
    cout<<endl;
    for(int i = 0;i<v.size();i++){
        int j = v.size()-1-i; //i+j = size - 1
        v2[i]=v[j];
    }
     for(int i = 0;i<v.size();i++){
        cout<<v2.at(i)<<" ";
    }

   
    return 0;
}