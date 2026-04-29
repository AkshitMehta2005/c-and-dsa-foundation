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
    cout << "Enter the array 1 " << endl;
    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < n; j++)
        {
            cin >> arr1[i][j];
        }
    }
    int p,q;
    cout << "Enter the rows" << endl;
    cin >> p;
    cout << "Enter the column" << endl; 
    cin >> q;
    int arr2[p][q];
    cout << " enter array 2 " << endl;
    for (int i = 0; i < p ; i++)
    {
        for (int j = 0; j < q; j++)
        {
            cin >> arr2[i][j];
        }
        cout << endl;
    }
int res[m][q];
  if(n!=p){cout<<"not able to multiply";}
   if(n==p){
    for(int i = 0;i<m;i++){
        for(int j = 0;j<q;j++){
        res[i][j] = 0;
            for(int k = 0;k<n;k++){
                res[i][j] = res[i][j] + arr1[i][k]*arr2[k][j];
            }
        }
    }
   }

    for (int i = 0; i < p ; i++)
    {
        for (int j = 0; j < q; j++)
        {
            cout<< res[i][j]<<" ";
        }
        cout << endl;
    }
    return 0;
}