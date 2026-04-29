// infix to postfix conversion
#include <iostream>
#include <stack>
using namespace std;
int prio(char ch)
{
    if (ch == '+' || ch == '-')
        return 1;
    else
        return 2;
}
string solve(string val1,string val2,char ch){
    // we have to store prefix in the ans
    // prefix  op+val1+val2
    string s ="";
    s+= val1;
    s+= val2;
    s.push_back(ch); //  ye change kiya bas
    return s;
}
int main()
{
    string s = "(7+9)^4/8-3"; // infix expression
    // make two stack for number  and ans character
    stack<string> val;
    stack<char> op;
    for (int i = 0; i < s.size(); i++)
    {
        if (s[i] >= '0' && s[i] <= '9')
        { 
            val.push(to_string(s[i] - '0'));
        }
        else
        { // s[i] = +,-,*,/,(,)
            if (op.size() == 0 )op.push(s[i]);
            else if(s[i]=='(')op.push(s[i]);
            else if(op.top()=='(') op.push(s[i]);
            else if(s[i]==')'){
                while(op.top()!='('){
                    //work
                    char ch = op.top();
                    op.pop();
                    string val2 = val.top();
                    val.pop();
                    string val1 = val.top();
                    val.pop();
                    string ans = solve(val1, val2, ch);
                    val.push(ans);
                }
                op.pop(); // opening ko bhi uda diya
            }
            else if(prio(s[i]) > prio(op.top())) op.push(s[i]);
            else
            {
                // work , prio(s[i]<=prio(op.top()))
                //  i have to do val1 op val2
                while (op.size() > 0 && prio(s[i]) <= prio(op.top()))
                {
                    // i have to do val1 op val2
                    char ch = op.top();
                    op.pop();
                    string val2 = val.top();
                    val.pop();
                    string val1 = val.top();
                    val.pop();
                    string ans = solve(val1, val2, ch);
                    val.push(ans);
                }
                op.push(s[i]);
            }
        }
    }
    // the stack can have still some val so make it empty
    // so make it empty
    while (op.size() > 0)
    {
        char ch = op.top();
        op.pop();
        string val2 = val.top();
        val.pop();
        string val1 = val.top();
        val.pop();
        string ans = solve(val1, val2, ch);
        val.push(ans);
    }
    cout << val.top();
}