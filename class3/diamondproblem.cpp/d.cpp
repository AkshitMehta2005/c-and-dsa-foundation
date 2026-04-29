#include <iostream>
using namespace std;
class A{
public:
int a_ka_public;
A(){
  cout<<"A ka constructor call kiya"<<endl;
}
};

class B:public A{
public:
int b_ka_public;
B(){
  cout<<"B ka constructor call kiya"<<endl;
}
};

class C:public A{
public:
int b_ka_public;
C(){
  cout<<"C ka constructor call kiya"<<endl;
}
};

class D:public B,public C{
public:
int b_ka_public;

D(){
  cout<<"D ka constructor call kiya"<<endl;
   B::a_ka_public = 2;         // method 1 use access specifier 
}
};

int main()
{  
  
  return 0;
}