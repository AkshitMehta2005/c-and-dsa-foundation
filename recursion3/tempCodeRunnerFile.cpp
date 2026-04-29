#include<iostream>
using namespace std;
void hanoi(int n,char a,char b,char c)//soarce ,helper,destination
{
    if(n==0)return;
    hanoi(n-1,a,c,b);
    cout<<a<<"-->"<<b<<endl;
    hanoi(n-1,b,a,c);
}
int main(){
    int n = 3;
    hanoi(n,'a','b','c');
    return 0;
}