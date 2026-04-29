#include<iostream>
using namespace std;
void swap(int*p1 ,int*p2){
    *p1 = *p1 + *p2;
     *p2 = *p1 - *p2;
     *p1 = *p1 - *p2;
     return ;
}
int main(){
   int a,b;
   cin>>a>>b;
   swap(&a,&b);
   cout<<a<<" "<<b;
}
