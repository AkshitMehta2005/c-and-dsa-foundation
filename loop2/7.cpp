//fibonacci number :- 0 1 1 2 3 5 ...n
#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter the number ";
    cin>>n;
    int c;
    int a = 0;
    int b = 1;
    for(int i = 1;i<=n;i++){
      cout<<a<<endl;
      c = a+b;
      a = b;
      b = c;
    }
    return 0;
}