#include <iostream>
using namespace std;
int main()
{
    int rows, columns;
    cout << "Enter the rows" << endl;
    cin >> rows;
    cout << "Enter the column" << endl;
    cin >> columns;
    int arr[rows][columns];
    cout << "Enter the array" << endl;
    for (int i = 0; i < rows; i++)
    {
        for (int j = 0; j < columns; j++)
        {
            cin >> arr[i][j];
        }
    }
    for (int i = 0; i < rows; i++)
    { // fliping rows
        if (arr[i][0] == 0)
        {
            for (int j = 0; j < columns; j++)
            {
                if (arr[i][j] == 0)
                    arr[i][j] = 1;
                else
                {
                    arr[i][j] = 0;
                }
            }
        }
    }

    for (int j = 0; j < columns; j++)
    { // fliping column
        if (arr[0][j] == 0)
        {
            for (int i = 0; i < rows; i++)
            {
                if (arr[i][j] == 0)
                    arr[i][j] = 1;
                else
                {
                    arr[i][j] = 0;
                }
            }
        }
    }

    // sum of rows
    int sum = 0;
    for (int i = 0; i < rows; i++)
    {
        int x = 1;
        for (int j = columns -1; j >= 0; j--)
        {
            sum = sum + arr[i][j] * x;
            x = x * 2;
        }
    }
    cout << sum;
}
