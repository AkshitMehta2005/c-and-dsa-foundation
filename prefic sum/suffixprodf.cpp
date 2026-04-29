#include<iostream>
#include<vector>
using namespace std;
int main(){
    int arr[] = {1,2,3,4};
    int n = sizeof(arr)/sizeof(arr[0]); // 4
    for(int i = n-2;i>=0;i--){
        arr[i] = arr[i]*arr[i+1];
    }
    for(int i = 0;i<n;i++){
       cout<<arr[i]<<" ";
    }
    return 0;
}