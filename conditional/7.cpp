// take postive number input and tell if it is divisible by 3 or 5 not 15
#include <iostream>
using namespace std;
int main()
{
    char n1;
    cout << "Enter the number" << endl;
    cin >> n1;
    if (n1 % 3 == 0)
    {
        if (n1 % 5 == 0)
        {
            cout << "The number is divisable by 5 or 3 but not 15";
        }
        else
        {
            cout << "the number is divisable by 5 or 3";
        }
    }
    else
        cout << "not divide by 3 or 5";
    return 0;
}