// print your name 5 times
#include<iostream>
using namespace std;
void print(int n){
if(n==0)return ;
cout<<"Akshit Mehta"<<" ";
n--;
print(n);
}

int main(){
    print(5);
    return 0;
}