// post to pre
#include <iostream>
#include <stack>
using namespace std;
string solve(string val1, string val2, char ch)
{
   string s="";
   s.push_back(ch);
   s +=val1;
   s+= val2;
   return s;
}
int main()
{
    string s = "79+4*8/3-"; // infix expression
    // make two stack for number ans character
    stack<string> val;
    for (int i = 0; i < s.size(); i++)
    {
        if (s[i] >= '0' && s[i] <= '9')
        { 
            val.push(to_string(s[i]-'0'));
        }
        else
        { // s[i] = +,-,*,/ isme barcket nahi hota
            // kaam karo
            string val2 = val.top();
            val.pop();
            string val1 = val.top();
            val.pop();
            string ans = solve(val1,val2,s[i]);
            val.push(ans);
        }
    }
    cout << val.top()<<endl;
    cout<<"-/*+79483";
}