/*
#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter the number n";
    cin>>n;
    for(int i = n;i>=1;i--){
        cout<<i<<endl;
    }
    return 0;
} 
*/

//100,97,94....1
#include<iostream>
using namespace std;
int main(){
    int a = 100;
    for(int i = 100;a>0;i--){
        cout<<a<<endl;
        a = a-3;
    }
    return 0;
} 