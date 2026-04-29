#include <iostream>
using namespace std;
int main()
{
//    int arr[3][3]={{1,1,1},{1,1,1},{1,1,1}};
//    int arr1[3][3]={{1,1,1},{1,1,1},{1,1,1}};
//   cout << " sum of array will be" << endl;
//     for (int i = 0; i < 3; i++)
//     {
//         for (int j = 0; j < 3; j++)
//         {
//             cout << arr[i][j] + arr1[i][j] << " ";
//         }
//         cout << endl;
//     }
    

    //second method
  int arr[3][3]={{1,1,1},{1,1,1},{1,1,1}};
   int arr1[3][3]={{1,1,1},{1,1,1},{1,1,1}};
  cout << " sum of array will be" << endl;
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            arr[i][j] =arr[i][j] + arr1[i][j] ;
            cout << arr[i][j] << " ";
        }
        cout<<endl;
    }
    
    return 0;
}