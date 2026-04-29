// Write a program to print the elements of both the diagonals in a square matrix.
//  #include<iostream>
//  using namespace std;
//  int main(){
//  int n ;
//  cout << "Enter the number of rows : ";
//  cin >> n;
//  int arr[n][n];
//  cout << "Enter the elements of matrix : "<<endl;
//  for(int i=0;i<n;i++){
//  for(int j=0;j<n;j++)cin>>arr[i][j];
//  }
//  cout << "Elements of both the diagonals are as follows : "<<endl;
//  for(int i = 0 ; i < n ; i++){
//  for(int j = 0 ; j < n ; j++){
//     if((i + j == n - 1) || (i == j))cout << arr[i][j] << " ";
//  else cout << " ";
//  }
//  cout<<endl;
//  }
//  }

// Write a program to rotate the matrix by 90 degrees anti-clockwise.
#include <bits/stdc++.h>
using namespace std;
int main()
{
    int arr[3][3] = {{1, 2, 3}, {4, 5, 6}, {7, 8, 9}};

    cout << "Matrix" << endl;
    cout << endl;
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            cout << arr[i][j] << " ";
        }
        cout << endl;
    }
    cout << endl;
    //"The transpose of the matrix will be" 
    cout << endl;
    for (int i = 0; i < 3; i++)
    {
        for (int j = i + 1; j < 3; j++)
        {
            int temp = arr[i][j];
            arr[i][j] = arr[j][i];
            arr[j][i] = temp;
        }
    }
    // reverese each column
    for (int j = 0; j < 3; j++)
    {
        for (int i = 0; i < 3 / 2; i++)
        {
            swap(arr[i][j], arr[3 - 1 - i][j]);
        }
    }
    //
    cout << "rotated matrix is" << endl;
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            cout << arr[i][j] << " ";
        }
        cout << endl;
    }
    return 0;
}