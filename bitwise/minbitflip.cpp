// how many bit flip required from change number 3 to 7
#include<iostream>
using namespace std;
int main(){
int x = 3;
int y = 7;
int a = x^y;
cout<<__builtin_popcount(a);
return 0;
}