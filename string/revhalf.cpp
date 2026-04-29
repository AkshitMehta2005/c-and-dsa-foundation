// reverse first half of string
#include<iostream>
#include<string>
#include<algorithm>
using namespace std;
int main(){
    string s = "akshit";
    int n = s.size();
    reverse(s.begin() ,s.begin()+n/2);
    cout<<s;
return 0;
}