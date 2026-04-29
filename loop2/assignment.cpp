// WAP to print the sum of all the even digits of a given number.
/*
#include<iostream>
using namespace std;
int main(){
    int n,m,sum = 0;
    cout<<"Enter the number n";
    cin>>n;
    while(n>0){
    m = n%10;
    if(m%2==0){
        sum = sum + m;
    }
    n=n/10;
    }
    cout<<sum;
    return 0;
    }
    */

//Print first ‘n’ fibonacci numbers.
/*
#include<iostream>
using namespace std;
int main(){
    int n;
    int a = 0;
    int b = 1;
    cout<<"Enter the number n";
    cin>>n;
    cout<<a<<endl;
     cout<<b<<endl;
    for(int i = 3;i<=n;i++){
        int c = a+b;
        cout<<c<<endl;
        a = b;
        b = c;
    }
    
    return 0;
    }
     */

//  important WAP to print the sum of a given number and its reverse.

#include<iostream>
using namespace std;
int main(){
    int n,m,temp,sum = 0;
    cout<<"Enter the number n";
    cin>>n;
    temp = n;
    while(n>0){
        m = n%10;
        n = n/10;
    }
    cout<<temp + m<<endl;
    return 0;
    }
  