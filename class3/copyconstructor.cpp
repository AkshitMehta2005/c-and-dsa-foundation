#include <iostream>
using namespace std;
class ohhoo
{
private:
  int a;

public:
  ohhoo()
  { this->a = 20;
    cout << "Default backchod";
  }

  ohhoo(ohhoo &obj){
  cout<<"it is the copy constructor! "<<endl;
  a = obj.a;
  }
  display(){
   cout<<a;
  }
};
int main()
{
  ohhoo o1 ;
  ohhoo ob1(o1);
  ob1.display();
  return 0;
}