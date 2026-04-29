#include <iostream>
using namespace std;
int main()
{
    int m,n;
    cout << "Enter the rows" << endl;
    cin >> m;
    cout << "Enter the column" << endl;
    cin >> n;
    int arr1[m][n];
    cout << "Enter the array  " << endl;
    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < n; j++)
        {
            cin >> arr1[i][j];
        }
    }
    //print
     for (int i = 0; i < m; i++)
    { 
        if(i%2==0){
        for (int j = 0; j < n; j++)
        {
            cout<<arr1[i][j]<<" ";
        } }
        else{
            for (int j = n-1; j >=0; j--)
        {
            cout << arr1[i][j] <<" ";
        }
        }
    }
    return 0;
}