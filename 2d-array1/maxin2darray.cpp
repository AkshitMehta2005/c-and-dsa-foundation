#include <iostream>
using namespace std;
int main()
{
    int row, column;
    cin >> row >> column;
    int arr[row][column];
    cout << "Enter the input" << endl;
    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < column; j++)
        {
            cin >> arr[i][j];
        }
    }
    int max = arr[0][0];
    cout << "Enter the output" << endl;
    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < column; j++)
        {
            if (max < arr[i][j])
            {
                max = arr[i][j];
            }
        }
    }
    cout << max;
    return 0;
}