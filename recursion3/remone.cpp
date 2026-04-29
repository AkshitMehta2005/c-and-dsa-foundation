// remove ones in array
#include<iostream>
#include<algorithm>
#include<climits>
using namespace std;
void removeonce(int arr[],int n,int arr1[],int idx){
if(arr[n]==0){
    cout<<arr1[n];
    return;
}
int a = arr[idx];
if(a == 0 ){removeonce(arr,n+1,arr1,idx);}
else{removeonce(arr,n+1,arr1+1,idx+1);}
}
int main(){
    int arr[] = {1,2,3,5,4,3};
    int n = sizeof(arr)/sizeof(arr[0]);
    int arr1[n];
    removeonce(arr,n,arr1,0);
}