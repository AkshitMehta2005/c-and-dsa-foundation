#include <iostream>
using namespace std;
int main()
{
    int x, y;
    cout << "Enter the point (x,y):- " << endl;
    cin >> x >> y;
    if (x == y)
        cout << "point of origin (0,0)";
    else if (x = 0 && y > x)
        cout << "iT LIES ON Y - Axis";
    else if (y = 0 && x > y)
        cout << "iT LIES ON X - Axis";

    return 0;
}