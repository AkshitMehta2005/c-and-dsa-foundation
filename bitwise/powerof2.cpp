//find the greatest power of 2 less then maximum power 34-->5^2 = 25
#include<iostream>
using namespace std;
int main(){
    int n = 24;
    n = n|n>>1;
    n = n|n>>2;
    n = n|n>>4;
    n = n|n>>8;
    n = n|n>>16;
    cout<<(n+1)/2;
    return 0;
}
