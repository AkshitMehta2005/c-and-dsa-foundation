#include <iostream>
using namespace std;
int a = 1;//global variable
int fun(int a){ 
    return a;
}
int main()
{  int a = 2;
   cout<<a+2<<endl;
   cout<<fun(a);
return 0;
}
