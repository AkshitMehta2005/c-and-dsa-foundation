//reverse the string from 2 to 5
#include <bits/stdc++.h>
using namespace std;
int main(){
    string s;
    s = "akshita";
    cout<<endl;
    reverse(s.begin()+1,s.end()-2);
    cout<<s;
}