#include<iostream>
#include<string>
using namespace std;
int main(){
    int n = 24;
    int temp = 24;
    n = n|n>>1;
    n = n|n>>2;
    n = n|n>>4;
    n = n|n>>8;
    n = n|n>>16;
    cout<<(n^temp);
    return 0;
}





