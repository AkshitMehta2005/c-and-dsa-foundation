#include <iostream>
using namespace std;
int main()
{
    int arr[] = {5, -4, 0, 3, 26, 1, 99, -80};
    int n = 8; // size
    // bubble sort optimised
    for (int i = 0; i < n - 1; i++)
    {
        bool flag = true; // if already sorted
        for (int j = 0; j < n - 1 - i; j++)
        { // -i time loop chlega or index less hoga
            if (arr[j] > arr[j + 1])
            {
                swap(arr[j], arr[j + 1]);
                flag = false;
            }
        }
           if (flag == true)
            {
                break;
            }
    }
    cout << endl;
    // after bubble sort
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
    return 0;
}