#include <iostream>
using namespace std;

class base
{
public:
  virtual void print() // use virtual for elimite the use of this print
  {
    cout << "it is the base print: " << endl;
  }
  void display()
  {
    cout << "it is the base display: " << endl;
  }
};

class derived : public base
{
public:
  void print()
  {
    cout << "it is the derived print: " << endl;
  }
  void display()
  {
    cout << "it is the derived display: " << endl;
  }
};

int main()
{
  base *bptr;
  derived d;
  bptr = &d;

  bptr->display();
  bptr->print();
  return 0;
}