#include <iostream>
using namespace std;
int main()
{
    char op;
    int a, b;
    cout << "Enter the operator";
    cin >> op;
    cout << "Enter a and b";
    cin >> a >> b;
    switch (op)
    {
    case '+':
        cout << (a + b);
        break;
    case '-':
        cout << (a - b);
        break;
    case '*':
        cout << (a * b);
        break;
    case '/':
        cout << (a / b);
        break;
    }
    return 0;
}