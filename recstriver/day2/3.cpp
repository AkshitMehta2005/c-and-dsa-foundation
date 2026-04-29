// print linearly n to 1
#include<iostream>
using namespace std;
void print(int n,int i){
if(i<1)return ;
cout<<i<<" ";
print(n,i-1);
}

int main(){
    print(5,5);
    return 0;
}   