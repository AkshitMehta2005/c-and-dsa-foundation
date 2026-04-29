/*
A B C D
A B C D
A B C D
A B C D
*/
#include<iostream>
using namespace std;
int main(){
    int n,m;
    cout<<"Enter the number of row : ";
    cin>>n;
    char ch;
    for(int i = 1;i<=n;i++){
        int a = 65;
        for(int j = 1;j<=n;j++){
            cout<<(char)a;
            a= a+1;
        }
        cout<<endl;
    }
    return 0;
}