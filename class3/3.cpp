#include <iostream>
using namespace std;
// initialisation list
class Bike
{
public:
  int tyresize;
  int engineSize;

  Bike(int ts,int es):tyresize(ts),engineSize(es){};
};
int main()
{
  
  Bike hero(30,20);
  Bike splinder(34,30);
  
  cout<<hero.engineSize<<" "<<hero.tyresize<<endl;
  
  cout<<splinder.engineSize<<" "<<splinder.tyresize;
  return 0;
} 