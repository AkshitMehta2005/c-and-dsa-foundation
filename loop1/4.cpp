//Ap = 1 , 3 , 5 , 7 -----n
/*
#include<iostream>
using namespace std;
int main()
{   
    int n;
    cout<<"Enter the number";
    cin>>n;
    for(int i = 1;i<=(2*n-1);i = i+2){
        cout<<i<<endl;
    }
    return 0;
}
*/

//ap :- 4 , 7 ,10,13...n
/*
#include<iostream>
using namespace std;
int main()
{   
    int n;
    cout<<"Enter the number";
    cin>>n;
    for(int i = 1;i<=(3*n+1);i = i+3){
        cout<<i<<endl;
    }
    return 0;
}
*/

//ap by using seprate variable
#include<iostream>
using namespace std;
int main()
{   
    int n;
    cout<<"Enter the number";
    cin>>n;
    int a = 4;
    for(int i = 1;i<=n;i++){
        cout<<a<<endl;
        a = a+3;
    }
    return 0;
}