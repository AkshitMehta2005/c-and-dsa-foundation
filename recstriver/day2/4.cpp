// print 1 to n by call stack

#include<iostream>
using namespace std;
void print(int n,int i){
if(i<1)return ;
print(n,i-1);
cout<<i<<" ";
}

int main(){
    print(5,5);
    return 0;
}