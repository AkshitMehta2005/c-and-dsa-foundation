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
    cout << "array will be" << endl;
    for (int i = 0; i < rows; i++)
    {
        for (int j = 0; j < columns; j++)
        {
            cout << arr[i][j] << " ";
        }
        cout << endl;
    }
    return 0;
}