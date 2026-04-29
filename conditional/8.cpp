//by nested loop greatest 2 number
#include<iostream>
using namespace std;
int main(){
    int n1,n2;
    cout<<"Enter two number";
    cin>>n1>>n2;
    if(n1>n2){
        if(n1>n2){
            cout<<n1;
        }
        else{
            cout<<n2;
        }
    }
    return 0;
}