//greater 3 number by nested if else
#include<iostream>
using namespace std;
int main(){
    int  a,b,c;
     cout<<"Enter the number";
     cin>>a>>b>>c;
     if(a>b){
        if(a>c){
           cout<<"greatest"<<a<<endl; 
        }

         else{
           cout<<"greatest"<<c; 
        }
     }
     else{
     if(b>c){
       cout<<"Greatest"<<b;
     }
     else{
      cout<<"Greatest"<<c;
     }
     }
}