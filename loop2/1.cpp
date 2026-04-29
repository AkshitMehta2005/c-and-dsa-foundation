//print the compostite number ---> between 1 to 12 = 2,3,4,6
/*
#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter the number n";
    cin>>n;
    for(int i = 2;i<=n-1;i++){
        if(n%i==0){
            cout<<i<<endl;
        }
    }
    return 0;
}
 */

//cheak weqater the number is compostite numeber or not 
#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter the number n";
    cin>>n;
    bool flag = true;
    for(int i = 2;i<=n-1;i++){
     if(n%i==0){ 
        flag = false;
     }
    }
    if(n==1) cout<<"neither prime or nor composite number";
    else if(flag==true) cout<<"prime number";
    else if(flag==false)cout<<"Composite number";
    return 0;
}