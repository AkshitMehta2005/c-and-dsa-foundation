// Q1 : Write a function to print squares of first n natural numbers, taking n as argument to the function

/*
#include<iostream>
using namespace std;
int squares(int a){
return a*a;
}
int main(){
    int n;
    cout<<"Enter the numeber";
    cin>>n;
    for(int i = 1;i<=n;i++){
        cout<<squares(i)<<endl;
    }
    
    return 0;
}
*/

//Write a function to take the radius of a circle as an argument and return its area.
/*
#include<iostream>
using namespace std;
float area(float n){
  return 3.14*n*n;
}
int main(){
    float radius;
    cout<<"Enter the radius";
    cin>>radius;
    cout<<area(radius);
    return 0;
}
*/

//Given two numbers a and b, write a function to print all odd numbers between them.
/*
#include<iostream>
using namespace std;
int oddnumber(int a,int b){
    for(int i = a;i<=b;i++){
        if(i%2!=0){
            cout<<i<<endl;
        }
    }
}
int main(){
    int a,b;
    cin>>a>>b;
    oddnumber(a,b);
    return 0;
}
*/

//Write a function to count the number of digits in a number and then print the square of this number.
#include<iostream>
using namespace std;
int sq(int a){
    return a*a;
}
int count(int n){
    int count = 0;
    while(n>0){
    n = n/10;
    count++;
    }
    return sq(count);
}

int main(){
    int n;
    cout<<"Enter the number :- ";
    cin>>n;
    cout<<count(n);
    return 0;
}

