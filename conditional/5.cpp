//take 3 number and find the greatest one
#include<iostream>
using namespace std;
int main(){
    int n1,n2,n3;
    cout<<"Enter the number " <<endl;
    cin>>n1;
    cout<<"Enter the number "<<endl;
    cin>>n2;
    cout<<"Enter the number "<<endl;
    cin>>n3;
    if(n1>n2 && n1>n3){
        cout<<"n1 is the greater"<<n1;
    }
    else if(n2>n1 && n2>n3){
        cout<<"n2 is the greater "<<n2;
    }
    else{
        cout<<"n3 is greater = "<<n3;
    }
    return 0;
}