// count the number of digit
#include<iostream>
using namespace std;
int main(){
    int n,og;
    cout<<"Enter the number n "<<endl;
    cin>>n;
    int count = 0;
    og = n;
    while(n>0){
        n = n/10;
        count++;
    }
    if(og==0) cout<<1;
    else cout<<count;
    return 0;
}