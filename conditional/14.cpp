// Given a point (x, y), write a program to find out if it lies on the x-axis, y-axis or at the origin, viz. (0, 0).
#include <iostream>
using namespace std;
int main()
{
    int x, y;
    cout << "Enter the point (x,y):- " << endl;
    cin >> x >> y;
    if (x == 0 && y == 0)
        cout << "point of origin (0,0)";
    else if (x == 0 && y > x)
        cout << "iT LIES ON Y - Axis";
    else if (y == 0 && y < x)
        cout << "IT LIES ON X - Axis";
    return 0;
}