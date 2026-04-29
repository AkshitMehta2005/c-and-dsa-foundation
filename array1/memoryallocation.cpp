#include <iostream> //continous memory alllocation
using namespace std;
int main()
{
    int arr[5] = {1, 2, 3, 4, 5};
    cout << &arr << endl;    //
    cout << arr << endl;     // both arr and &arr represent adress
    cout << &arr[0] << endl; // 4byte
    cout << &arr[1] << endl; // 8 byte
    cout << &arr[2] << endl;
    cout << &arr[3] << endl;
    cout << &arr[4] << endl;
    return 0;
}