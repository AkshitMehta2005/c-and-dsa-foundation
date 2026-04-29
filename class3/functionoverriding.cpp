// function overrinding // run time

// #include <iostream>
// using namespace std;

// class A {
// public:
//     int a_ka_public;
//     void show(){
//       cout<<"A ka show hu mai"<<endl;
//     }
// };

// class B : public A {
// public:
//     int b_ka_public;
//     void show(){
//       cout<<"A ki overriding kar li mene ka show hu mai"<<endl;
//     }
// };

// int main() {
//     B b;
//     b.show();
//     b.A::show(); // access by using access specifier
//     return 0;
// }

// 2nd

#include <iostream>
using namespace std;
class vehicle
{
public:
  int tyresize;
  int engineSize;
  int lights;
  string companyName;
  virtual void show()
  {
    cout << "vechile  ka show!" << endl;
  }
};

class Bike : public vehicle
{
public:
  int handlesize;
  void show()
  {
    cout << "Bike ka show!" << endl;
  }
};

class C : public Bike{
  public:
  void show(){
    cout<<"C ka show"<<endl;
  }
};
int main()
{ 
  // compliar POV - vechile ka address hai
  // compile time bininding
  

  // runtime bininding mai - bike ka address hai

  // Bike b;
  // vehicle *a;
  // a = new Bike;
  // a->show();


  // 2nd wala hai
  // 1 ke liye virtual sab ke liye virtual hota hai
  Bike *b;
  b = new C;
  b->show();
  
  return 0;
}
