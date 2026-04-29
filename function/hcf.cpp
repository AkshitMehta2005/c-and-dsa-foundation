#include <iostream>
using namespace std;
int gcd(int x,int y){
  int hcf = 1; // sab hcf ki vcalue one hoti ha by default
  for(int i = min(x,y);i>=1;i--){
    if(x%i==0 && y%i==0){
    hcf = i;
    break;}
  }
  return hcf;
}
int main()
{
int x,y;
cin>>x>>y;
cout<<gcd(x,y);
}
