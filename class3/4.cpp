// polymorphysim
#include <iostream>
using namespace std;
class Bike
{
public:
  int tyresize;
  int engineSize;
 // constructor overloading 
  Bike(int ts,int es):tyresize(ts),engineSize(es){};
  Bike():tyresize(12),engineSize(13){};
  Bike(int ts):tyresize(ts),engineSize(100){};
};
int main()
{
  
  Bike hero(30,20);
  Bike splinder(34,30);
  
  cout<<hero.engineSize<<" "<<hero.tyresize<<endl;
  
  cout<<splinder.engineSize<<" "<<splinder.tyresize;
  return 0;
}