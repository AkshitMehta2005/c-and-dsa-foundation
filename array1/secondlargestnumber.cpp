#include <iostream>
#include <climits>
using namespace std;
int main()
{
    int arr[4] = {1, 18, 16, 18};
    int max = INT_MIN;
    for (int i = 0; i <= 3; i++)
    {
        if (max < arr[i])
            max = arr[i];
    }
    int secondmax = INT_MIN;
    for (int i = 0; i <= 3; i++)
    {
        if (arr[i] != max && secondmax < arr[i])
            secondmax = arr[i];
    }
    cout << secondmax;
    return 0;
}