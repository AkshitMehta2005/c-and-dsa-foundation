#include<iostream>
#include<cmath>
using namespace std;
void printfactor(int n){
    for(int i = 1;i<=sqrt(n);i++){
        if(n%i==0)cout<<i<<" ";
    }

    for(int i = sqrt(n);i>=1;i--){
        if(i!=sqrt(n))cout<<n/i<<" ";
    }
}
int main(){
    printfactor(49);
}

// leetcode 507