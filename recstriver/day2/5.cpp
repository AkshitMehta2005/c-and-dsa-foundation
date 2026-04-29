// print n to 1 by call stack

#include<iostream>
using namespace std;
void print(int n,int i){
if(i>n)return ;
print(n,i+1);
cout<<i<<" ";

}

int main(){
    print(5,1);
    return 0;
}