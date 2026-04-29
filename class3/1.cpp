#include <iostream>
using namespace std;
class Bike
{
public:
  int tyresize;
  // default constructor

  // Bike()
  // { 
  //   cout << "Welcome in our bike shop!\n";
  // }
   
  // paramatersised constructor
  Bike(int tyresize = 200)
  { 
    this->tyresize = tyresize;
  }

  // destructor used to free memory 
  ~Bike(){
    cout<<"Memory free successfully!"<<endl;
  }
};
int main()
{
   
  // Bike tvs;

  // for paramaterised constructor
  bool flag = 1;
  if(flag==1){
    Bike tvs(40);
    cout<<tvs.tyresize<<endl;
  }
  Bike hero(30);
  Bike splinder(34);
  cout<<hero.tyresize<<endl;
  cout<<splinder.tyresize<<endl;
  return 0;
}