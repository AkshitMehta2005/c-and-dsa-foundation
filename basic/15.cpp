// WAP to find the difference between ASCII of two characters ,take them as input .
#include<iostream>
using namespace std;
int main(){
    char ch1 ,ch2;
    cout<<"Enter the character ch1 and ch2"<<endl;
    cin>>ch1>>ch2;
    cout<<"the difference of first character  - 2nd character "<< (int)ch1 - (int)ch2 <<endl;
    return 0;
}