//sort
#include <bits/stdc++.h>
using namespace std;
int main(){
    vector<int>v;
    v.push_back(3);
     v.push_back(1);
     v.push_back(2);
    sort(v.begin(),v.end());
    for(int i = 0;i<3;i++){
        cout<<v[i]<<" ";
    }
    return 0;
}