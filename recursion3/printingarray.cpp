#include<iostream>
using namespace std;
void print(int a[],int n,int idx){
    if(n==0) return ;
    cout<<a[idx]<<" ";
    print(a,n-1,idx+1);
}
int main(){
    int arr[6] = {1,2,3,4,5,6};
    int n = sizeof(arr)/sizeof(arr[0]);
    print(arr,n,0);
    return 0;
}