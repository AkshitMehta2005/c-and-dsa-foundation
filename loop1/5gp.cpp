// gp = 1,2,4,8,16...n
#include <iostream>
using namespace std;
int main()
{
    int a = 1;
    int n;
    cout << "Enter the number n";
    cin >> n;
    for (int i = 1; i <= n; i++)
    {
        cout << a << endl;
        a = a * 2;
    }
    return 0;
} 