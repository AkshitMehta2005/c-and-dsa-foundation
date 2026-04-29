// remove the consecutive duplicate in a string
#include<iostream>
#include<algorithm>
#include<stack>
#include<string>
using namespace std;
string remove(string s){
    stack<char>st;
    st.push(s[0]);
    for(int i = 1;i<s.size();i++){
        if(s[i]!=st.top())st.push(s[i]);
    } 
    s = "";
    while(st.size()>0){
        s +=st.top();
        st.pop();
    }
    reverse(s.begin(),s.end());
    return s;
}
int main(){
string s = "aaabbcddaabffg"; 
cout<<s<<endl; 
cout<<remove(s)<<endl;
return 0;
} 

