#include<iostream>
#include<algorithm>
#include<climits>
using namespace std;
void max(int a[],int n,int idx,int maxn){
    if(n==idx){
        cout<<maxn;
        return;}
    if(maxn<a[idx]){
        maxn = a[idx];
    }
    max(a,n,idx+1,maxn);
}
int main(){
    int arr[] = {1,2,3,5,4,3};
    int n = sizeof(arr)/sizeof(arr[0]);
    max(arr,n,0,INT_MIN);
        return 0;
}