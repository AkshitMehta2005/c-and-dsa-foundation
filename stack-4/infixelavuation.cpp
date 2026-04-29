// wirthout bracket
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

int solve(int val1, int val2, char ch)
{
    if(ch=='+')return val1+val2;
    else if(ch=='-')return val1-val2;
    else if(ch=='*')return val1*val2;
    else return val1/val2;
}

int main()
{
    string s = "1+3/3*2"; // infix ecpression
    // make two stack for number ans character
    stack<int> val;
    stack<char> op;
    for (int i = 0; i < s.size(); i++)
    {
        if (s[i] >= '0' && s[i] <= '9')
        {/**/
            val.push(s[i] - '0');
        }
        else
        { // s[i] = +,-,*,/
            if (op.size() == 0 || prio(s[i]) > prio(op.top()))
                op.push(s[i]);
            else
            {
                // work , prio(s[i]<=prio(op.top()))
                //  i have to do val1 op val2
                while (op.size() > 0 && prio(s[i]) <= prio(op.top()))
                {
                    // i have to do val1 op val2
                    char ch = op.top();
                    op.pop();
                    int val2 = val.top();
                    val.pop();
                    int val1 = val.top();
                    val.pop();
                    int ans = solve(val1, val2, ch);
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
        int val2 = val.top();
        val.pop();
        int val1 = val.top();
        val.pop();
        int ans = solve(val1, val2, ch);
        val.push(ans);
    }
    cout << val.top();
}
