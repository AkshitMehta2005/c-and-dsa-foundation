#include <iostream>
using namespace std;

class Complex // Operator overloading is a feature in object-oriented programming (like C++ and Python) that allows programmers to redefine the way operators (+, -, *, ==, etc.) work for user-defined data types (classes/objects).
{
private:
  int real;
  int img;

public:
  Complex(int r, int i)
  {
    real = r;
    img = i;
  }

  Complex operator+(Complex &obj)
  {
    Complex res(0, 0); // Initialize the result with 0

    // Add corresponding components
    res.real = real + obj.real;
    res.img = img + obj.img;

    return res;
  }

  void display()
  {
    cout << real << "+i" << img;
  }
};

int main()
{
  Complex p1(1, 3);
  Complex p2(2, 4);

  Complex ans = p1 + p2;
  ans.display();

  return 0;
}
