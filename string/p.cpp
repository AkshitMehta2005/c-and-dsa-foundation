#include<iostream>
// #include<string>
#include<algorithm>
using namespace std;
int main(){
  string s = "akshit";
  for(int i = 0;i<s.size();i++){
    if(i%2==0)s[i] = 'a';
  }
  // cout<<s;
//  reverse(s.begin(),s.end());  
  reverse(s.begin(),s.end());
  cout<<s;
return 0;
}