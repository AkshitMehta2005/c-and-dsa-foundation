//enter the roll number  and marks  of the student of 4 student
#include <iostream>
using namespace std;
int main()
{  int row,column;
   cin>>row>>column;
   int arr[row][column];
   cout<<"Enter the input"<<endl;
   for(int i = 0;i<row;i++){
    for(int j = 0;j<column;j++){
        cin>>arr[i][j];
    }
   }
   cout<<"Enter the output"<<endl;
   for(int i = 0;i<row;i++){
    for(int j = 0;j<column;j++){
        cout<<arr[i][j]<<"    ";
    }
    cout<<endl;
   }
    return 0;
    }