#include<iostream>
using namespace std;
int main(){
    int x = 5;
    int*ptr =&x;// ptr = adress(0x61ff08)
    int**p =&ptr; //p = adress ptr(0x61ff04)
   // cout<<x<<" "<<ptr<<" "<<p;
   cout<<x<<" "<<*ptr<<" "<<**p;
    return 0;
}