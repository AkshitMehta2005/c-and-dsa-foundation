#include <iostream>
using namespace std;
void starTriangle(int x)
{ // argument
    for (int i = 1; i <= x; i++)
    {
        for (int j = 1; j <= i; j++)
        {
            cout << "*";
        }
        cout << endl;
    }
}
int main()
{
    starTriangle(5);
     starTriangle(4);
      starTriangle(4);
    return 0;
}