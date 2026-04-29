// high se low flow nahi karta 

// inheritance
#include <iostream>
using namespace std;
class A{ // this is called multilevel inheritence
  private: // can't be access , cant ne inherited 
  int a_ka_private;

  protected: // can't be access ,can be inherited 
  int a_ka_protected;

  public: //  access , inherited 
  int a_ka_public;
};

class B:protected A{ // can access a_ka_public,a_ka_protected
public:
int b_ka_public;
void show(){
  // a_ka_public = 2;
  // a_ka_protected = 3;

}
};

class C:public B{ //  can access  a_ka_protected,a_ka_public, b_ka_public
public:
int C_ka_public;
void show(){
  a_ka_protected = 2;
  a_ka_public = 3;
  b_ka_public= 4;

}
};
int main()
{ 
   B b;
   b.a_ka_public = 10; // not accessable because private ho gya ab
   b.b_ka_public = 20;
   
  return 0;
}