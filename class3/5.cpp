// inheritance
#include <iostream>
using namespace std;
class vehicle{ // parent class  // base class
public:
 int tyresize;
 int engineSize;
 int lights;
 string companyName;
 vehicle(){
    cout<<"vehicle ka constructor call kiya !!"<<endl;
  }
};

class car: public vehicle{ // child class
  public:
  int stearingsize;
  car(){
    cout<<"car ka constructor call kiya !!"<<endl;
  }
};


class Bike:public vehicle{
public:
  int handlesize;
  Bike(){
    cout<<"Bike ka constructor call kiya !!"<<endl;
  }
};
int main()
{
  
  Bike hero;
  hero.handlesize = 20;
  hero.companyName ="akshitop";
  hero.tyresize = 30;
  cout<<hero.handlesize<<endl;
  cout<<hero.companyName<<endl;
  cout<<hero.tyresize<<endl;
  return 0;
}