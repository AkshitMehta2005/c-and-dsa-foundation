#include<iostream>
using namespace std;
int main(){
  /* 
   int a,b;
   cin>>a>>b;
   int*p = &a;
   int*q = &b;
   cout<<*p + *q<<endl;
   */
   int a,b;
   int*p = &a;
   int*q = &b;
   cin>>*p>>*q;
   cout<<*p + *q<<endl;
}