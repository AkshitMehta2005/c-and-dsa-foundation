#include <iostream>
using namespace std;
class Bike
{
public:
  static int noOfBikes; // this belog to class not object
  int tyresize;

  Bike(int tyresize)
  { 
    this->tyresize = tyresize;
  }

  static void increaseNoOfbikes(){
    noOfBikes++;
  } 
};
int Bike::noOfBikes = 10;
int main()
{
  
  Bike hero(30);
  Bike splinder(34);
  // cout<<"No of bike will be"<<endl;
  // cout<<hero.noOfBikes<<endl;
  // cout<<splinder.noOfBikes<<endl;
  // cout<<"---------------------------"<<endl;
  // cout<<"tyre size will be: "<<endl;
  // cout<<hero.tyresize<<endl;
  // cout<<splinder.tyresize<<endl;

  hero.increaseNoOfbikes();
  cout<<hero.noOfBikes<<endl;

  splinder.increaseNoOfbikes();
  cout<<splinder.noOfBikes<<endl;
  

  Bike::increaseNoOfbikes();
  cout<<splinder.noOfBikes<<endl;
  cout<<hero.noOfBikes<<endl;
  return 0;
}