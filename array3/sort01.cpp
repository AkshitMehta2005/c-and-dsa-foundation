#include<iostream>
#include<vector>
using namespace std;
void sort01(vector<int>&v){
    int noo = 0; // no of zero
    int no1 = 0; // no of once
    int n = v.size();
    for(int i = 0;i<n;i++){
        if(v[i]==0)noo++;
        else no1++;
    }
    for (int i = 0; i < n; i++)
    { if(i<noo)v[i] = 0;
        else v[i] = 1;
    }
    
}
int main(){
    vector<int>v;
    v.push_back(0);
    v.push_back(1);
    v.push_back(1);
    v.push_back(0);
    sort01(v);
    int n = v.size();
    for(int i = 0;i<n;i++){
      cout<<v[i]<<" ";
    }
    return 0;
}