#include<iostream>
using namespace std;
void print(int n){
if(n==2)return ;
cout<<n<<" ";
n++;
print(n);
}

int main(){
    print(0);
    return 0;
}