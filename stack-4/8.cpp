// prefix evaluation
// reverse order mai chalna ha
//val1  phle ayega  kyuki reverse kiya ha


#include <iostream>
#include <stack>
using namespace std;
int solve(int val1, int val2, char ch)
{
    if (ch == '+')
        return val1 + val2;
    else if (ch == '-')
        return val1 - val2;
    else if (ch == '*')
        return val1 * val2;
    else
        return val1 / val2;
}
int main()
{
    string s = "-/*+79483"; // prefix expression
    // make two stack for number ans character
    stack<int> val;
    for (int i = s.size()-1; i >=0; i--)
    {
        if (s[i] >= '0' && s[i] <= '9')
        { 
            val.push(s[i] - '0');
        }
        else
        { // s[i] = +,-,*,/ isme barcket nahi hota
            // kaam karo
            int val1 = val.top(); // order change kara diya value ka
            val.pop();
            int val2 = val.top();
            val.pop();
            int ans = solve(val1,val2,s[i]);
            val.push(ans);
        }
    }
    cout << val.top();
}