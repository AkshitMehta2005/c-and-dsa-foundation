#include<iostream>
using namespace std;
int main(){
    int year;
    cout<<"Enter the year";
    cin>>year;
    if(year%4==0||year%100==0 &&year%100!=0){
        cout<<"It is the leap year ";
    }
    else{
        cout<<"Not the leap year";
    }
    return 0;
}