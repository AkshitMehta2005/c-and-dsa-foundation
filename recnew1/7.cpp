// power
#include<iostream>
int power(int a , int b){
    if(b == 0 )return 1;
    if(b == 1)return a;
    return a*power(a,b-1);
}
using namespace std;
int main(){
   cout << power(2,3);
return 0;
}
// space complexcity is high in recursion
