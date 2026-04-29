/*
given an interger array nums,in which is exactlt two element
 appear only once and all the other element appear exactly 
 twice .find the element that appear only once
*/
#include<iostream>
using namespace std;
int main(){
    int arr[] = {1,1,2,2,3,4};  // 3 and 4
    int n = sizeof(arr)/sizeof(arr[0]);
    int res = 0;
    for(int i = 0 ;i<n;i++){
        res = res^arr[i]; 
    }
    cout <<res;
    return 0;
}