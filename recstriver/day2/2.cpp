// print linearly 1 to n
#include<iostream>
using namespace std;
void print(int n,int i){
if(i==n+1)return ;
cout<<i<<" ";
i++;
print(n,i);
}

int main(){
    print(5,1);
    return 0;
}