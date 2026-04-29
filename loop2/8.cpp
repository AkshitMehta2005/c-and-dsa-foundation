//power a raised to the power b
#include<iostream>
using namespace std;
int main(){
    int a,b;
    cout<<"Enter a "<<endl;
    cin>>a;
    cout<<"Enter b "<<endl;
    cin>>b;
    int power = 1;
    for(int i = 1;i<=b;i++){
        power = power * a;
    }
    cout<<a<<" Raised to power "<< b<< " is "<<power;
    return 0;
}