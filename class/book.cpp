#include<iostream>
#include<string>
using namespace std;
class book{
public:
char name;
int price;
int pages;

int countBooks(int p){
   if (price<p)
   return 1;
   else
   return 0;
}
bool isBookPresent(char book){
 if(name == book )
 return true;
 else
 return false;
}
};
int main(){
    book harrypotter;
    harrypotter.name = 'H';
    harrypotter.price = 1000;
    harrypotter.pages = 200;

    cout<<(harrypotter.countBooks(1200))<<endl;
    cout<<harrypotter.isBookPresent('A');
    return 0;
}