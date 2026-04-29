#include <iostream>
using namespace std;
int main()
{
    int target;
    cin >> target;
    int rows, columns;
    cout << "Enter the rows" << endl;
    cin >> rows;
    cout << "Enter the column" << endl;
    cin >> columns;
    int arr[rows][columns];
    bool flag = false;
    cout << "Enter the array" << endl;
    for (int i = 0; i < rows; i++)
    {
        for (int j = 0; j < columns; j++)
        {
            cin >> arr[i][j];
        }
    }
    int i = 0;
    int j = columns - 1;
    while (i <= rows-1 && j >= 0)
    {
        if (arr[i][j] == target)
            flag = true;

        if (arr[i][j] > target)
            j--;
        else
            i++;
    }
    if (flag == true)
        cout << "yes it is present";
    else
    {
        cout << "not present";
    }
    return 0;
}