/*
1 2 3 4
1 2 3 4
1 2 3 4
1 2 3 4
*/

#include<iostream>
using namespace std;
int main(){
    int n,m;
    cout<<"Enter the number of row : ";
    cin>>n;
     cout<<"Enter the number of col : ";
    cin>>m;
    for(int i = 1;i<=n;i++){
        for(int j = 1;j<=m;j++){
            cout<<j;
        }
        cout<<endl;
    }
    return 0;
}