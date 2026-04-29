#include <iostream>
using namespace std;
class vehicle
{
public:
  int tyresize;
  int engineSize;
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
int main()
{ vehicle a;
  Bike b;
  cout<<sizeof(a)<<endl;
  cout<<sizeof(b)<<endl;
  return 0;
}
