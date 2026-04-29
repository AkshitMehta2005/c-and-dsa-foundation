//find the uniques element in array
/*
properties
2^0 = 2
3^3 = 0
*/
#include<iostream>
using namespace std;
int main(){
    int arr[] = {1,2,2,1,3,3,4};
    int n = sizeof(arr)/sizeof(arr[0]);
    int res = 0;
    for(int i = 0 ;i<n;i++){
        res = res^arr[i]; //0x1 then ans = 1,1^1 = 0,0^2 = 2,2^2 = 0
    }
    return 0;
}