// inheritance
#include <iostream>
using namespace std;
class A{
  private: // can't be access , cant ne inherited 
  int a_ka_private;

  protected: // can't be access ,can be inherited 
  int a_ka_protected;

  public: //  access , inherited 
  int a_ka_public;
};
class B:private A{
public:
int b_ka_public;
void show(){
  // a_ka_public = 2;
  // a_ka_protected = 3;

}
};
int main()
{ 
   B b;
  //  b.a_ka_public = 10; // not accessable because private ho gya ab
   b.b_ka_public = 20;
   
  return 0;
}