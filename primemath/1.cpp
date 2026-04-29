#include<iostream>
#include<cmath>
using namespace std;


bool checkPrime(int n){
    if(n <= 1) return false; // 0 and 1 are not prime
    for(int i = 2; i <= sqrt(n); i++){
        if(n % i == 0){
            return false; // found a divisor
        }
    }
    return true; // no divisors found
}

int main(){
    if(checkPrime(2)==true){
        cout<<"prime number";
    }
    else{
    cout<<"not prime";
    }
   
}