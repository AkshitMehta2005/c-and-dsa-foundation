#include<iostream>
using namespace std;
int main(){
    int arr[7] = {1,1,0,0,1,0,1}; //binary number
    int x = 1; //x last wala number hoga jisme 2 multiply karege
    int sum = 0;
    for(int i = 6;i>=0;i--){
        sum = sum + arr[i]*x;
        x  = x*2;
    }
    cout<< sum;
    return 0;
}