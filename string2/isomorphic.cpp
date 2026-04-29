//"abcd" = "ghij" mapping of a set to b and b to a
#include<iostream>
#include<vector>
using namespace std;
int main(){
    bool flag = false;
    vector<int>v(150,1000);
    string s = "aksh";
    string p = "pkkq";
    if(s.length()!=p.length())flag = false;
    for(int i =0;i<v.size();i++){
    int idx = (int)s[i];
    if(v[idx]==1000)v[idx]=s[i]-p[i];
    else if(v[idx]!=s[i]-p[i])flag = false;
    }

    for(int i = 0;i<150;i++){
        v[i]=1000;
    }
    for(int i =0;i<v.size();i++){
    int idx = (int)p[i];
    if(v[idx]==1000)v[idx]=p[i]-s[i];
    else if(v[idx]!=p[i]-s[i])flag = false;
    }
    flag = true;
    cout<<flag;
    return 0;
}