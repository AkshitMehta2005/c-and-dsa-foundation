//reverse the number
#include<iostream>
using namespace std;
int main(){
    int n,m;
    cout<<"Enter the number";
    cin>>n;
    while(n>0){
        m = n%10;
        cout<<m;
        n = n/10;
    }
    return 0;
}