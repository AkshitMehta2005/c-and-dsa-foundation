//Q1 : Write a program to find the product of two numbers using pointers.

#include<iostream>
using namespace std;
int main(){
    int a,b,n;
    cin>>a>>b;
    int*ptr1 = &a;
    int*ptr2 = &b;
    cout<< (*ptr1 * *ptr2);
    return 0;
}