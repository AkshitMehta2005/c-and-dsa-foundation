#include<iostream>
using namespace std;
int main(){
     int arr[3][3]={{1,2,3},{2,3,4},{4,4,2}};
    cout<<"Matrix"<<endl;  
     for(int i = 0;i<3;i++){
        for(int j = 0;j<3;j++){
            cout<<arr[i][j]<<" ";
        }
        cout<<endl;
     }
     cout<<endl;
     //column wise printing
      
     cout<<"transpose"<<endl;
     for(int j = 0;j<3;j++){
        for(int i = 0;i<3;i++){
            cout<<arr[i][j]<<" ";
        }
        cout<<endl;
     }
     return 0;
}