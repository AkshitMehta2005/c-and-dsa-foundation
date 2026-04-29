#include <iostream>
using namespace std;
int main()
{
    // int arr[7]={1,2,3,3,4,4,5};
    int arr[7];
    cout << "Enter the number in array";
    for (int i = 0; i <= 6; i++)
    {
        cin >> arr[i];
    }
    cout << "the value of array will be :- ";
    for (int i = 0; i <= 6; i++)
    {
        cout << arr[i] << " ";
    }
    return 0;
}