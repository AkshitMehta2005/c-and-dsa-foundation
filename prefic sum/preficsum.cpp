//arr[] = {1,2,3,4}
//prefix sum will be arr[] = arr[i]+ arr[i-1]; 
// prefix sum[] = {1,3,6,10}

#include<iostream>
#include<vector>
using namespace std;
int main(){
    int arr[] = {1,2,3,4};
    int n = sizeof(arr)/sizeof(arr[0]);
    vector<int>a(arr,arr+n);
    for(int i = 1;i<n;i++){
        a[i] = a[i] + a[i-1];
    }
    
    for(int i = 0;i<n;i++){
        cout<<a[i]<<" " ;
    }
    return 0;
}