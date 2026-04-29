// pre to infix
#include <iostream>
#include <stack>
using namespace std;
string solve(string val1, string val2, char ch)
{
   // pre to in
   //infix is : val1 op val2
   string s ="";
   s+=val1;
   s.push_back(ch);
   s+=val2;
   return s;
}
int main()
{
    string s = "-/*+79483"; // prefix expression
    // make two stack for number ans character
    stack<string> val;
    for (int i = s.size()-1; i >=0; i--)
    {
        if (s[i] >= '0' && s[i] <= '9')
        { 
            val.push(to_string(s[i] - '0'));
        }
        else
        { // s[i] = +,-,*,/ isme barcket nahi hota
            // kaam karo
            string val1 = val.top(); // order change kara diya value ka
            val.pop();
            string val2 = val.top();
            val.pop();
            string ans = solve(val1,val2,s[i]);
            val.push(ans);
        }
    }
    cout << val.top();
}