#include <iostream>
using namespace std;
int main()
{
    int n, m, sum = 0;
    cout << "Enter the number n";
    cin >> n;
    int og = n;
    while (n > 0)
    {
        m = n % 10;
        sum = sum + m * m * m;
        n = n / 10;
    }

    if (og == sum)
    {
        cout << "It is the amgstrong number";
    }
    else
        cout << "Not the amgstrong number";
    return 0;
}