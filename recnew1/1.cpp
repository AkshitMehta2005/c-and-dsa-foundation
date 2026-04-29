// function call itself
#include<iostream>
using namespace std;
void fun(int n){
    if(n==0)return ;
    cout<<"Good Moring";
    fun(n-1);
}
int main(){
    int q ;
    cout<<"ENter Number";
    cin>>q;
    fun(q);
return 0;
}