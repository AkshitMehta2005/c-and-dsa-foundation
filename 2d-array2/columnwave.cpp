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
     for (int j = 0; j<n; j++)
    { 
        if(j%2==0){
        for (int i = 0; i < n; i++)
        {
            cout<<arr1[i][j]<<" ";
        } }
        else{
            for (int i = n-1; i >=0; i--)
        {
            cout << arr1[i][j] <<" ";
        }
        }
    }
    return 0;
}