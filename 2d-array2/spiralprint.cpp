#include<iostream>
using namespace std;
int main(){
    int m,n;
    cout << "Enter the rows" << endl;
    cin >> m;
    cout << "Enter the column" << endl;
    cin >> n;
    int arr[m][n];
    cout << "Enter the array  " << endl;
    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < n; j++)
        {
            cin >> arr[i][j];
        }
    }
    cout<<endl;
    int min_row = 0;
    int min_column = 0;
    int max_row = m-1;
    int max_column = n-1;
    while(min_row<=max_row && min_column<=max_column){
        //right
        for(int j = min_column;j<=max_column;j++){
            cout<<arr[min_row][j]<<" ";
        }
        min_row++;
        if(min_row>max_row || min_column>max_column)break;
        //down
        for(int i = min_row;i<=max_row;i++){
            cout<<arr[i][max_column]<<" ";
        }
        max_column--;
        if(min_row>max_row || min_column>max_column)break;
        //left
        for(int j = max_column;j>=min_column;j--){ //row wala try karna
            cout<<arr[max_row][j]<<" ";
        }
        max_row--;
        if(min_row>max_row || min_column>max_column)break;
        //up
         for(int i = max_row;i>=min_row;i--){
            cout<<arr[i][min_column]<<" ";
        }
        min_column++;
        if(min_row>max_row || min_column>max_column)break;
    }
    return 0;
}