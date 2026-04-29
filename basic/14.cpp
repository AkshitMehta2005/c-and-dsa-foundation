// take float input and print the factional part of the real number --->19.23 - 19 = 0.23 by using typecasting function
#include<iostream>
 using namespace std;
 int main(){
 float x;
 int y ;
 cout<<"Enter the number in float x : - "<<endl;
 cin>>x;
 y = (int)x;
 cout<<"ans will be "<<(x - y)<<endl;
 return 0;
 }  