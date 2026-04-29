//Q5: Write a program to print the row number having the maximum sum in a given matrix.
#include <iostream>
#include<climits>
using namespace std;
int main()
{
    
    int arr[3][4];
    cout << "Enter the array" << endl;
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 4; j++)
        {
            cin >> arr[i][j];
        }
    }
    cout << "array will be" << endl;
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 4; j++)
        {
            cout << arr[i][j] << " ";
        }
        cout << endl;
    }
   int index  = -1;
   int max = INT_MIN;
   for(int i = 0;i<3;i++){
    int  sum = 0;
    for(int j = 0;j<4;j++){
       sum = sum +arr[i][j]; 
    }
    if(max<sum){
        max = sum;
        index = i;
    }
   }
   cout<<index+1; //row number

    return 0;
}



