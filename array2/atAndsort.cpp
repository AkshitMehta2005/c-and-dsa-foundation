#include <bits/stdc++.h>
using namespace std;
int main(){
    vector<int>v;
    v.push_back(4);
     v.push_back(3);
      v.push_back(1);
       v.push_back(9);
//v.at(0) = 7;   //v.at(index) = change
for(int i = 0 ; i<v.size() ; i++){
 cout<<v.at(i)<<" ";
}
cout<<endl;
//sort(v.begin() , v.end());
//reverse(v.begin(),v.end());
for(int i = 0 ; i<v.size() ; i++){
 cout<<v.at(i)<<" ";
}
return 0;
}