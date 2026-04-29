#include<iostream>
#include<string>
#include <algorithm>
using namespace std;
int main(){
   string s = "abc";
//    for(int i = s.size();i>=0;i--){
//     cout<<s[i];
//    }
   reverse(s.begin(),s.end());
   cout<<s;
    return 0;
}