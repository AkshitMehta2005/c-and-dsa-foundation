//cp and sp;
#include<iostream>
using namespace std;
int main(){
    int cp,sp,profit,loss;
    cout<<"Enter the cp :- ";
    cin>>cp;
    cout<<"Enter the sp :- ";
    cin>>sp;
    if(sp>cp){
       cout<<"profit = "<<sp-cp<<endl;;
    }
    if(sp==cp){
      cout<<"No profit no loss";
    }
    if(sp<cp){
        cout<<"Loss = "<<cp-sp;
    }
    return 0;
}