// find the equilibrium index in array [-7, 1, 5, 2, -4, 3, 0]
#include<iostream>
using namespace std;
int main(){
int arr[] = {1,3,5,2,2};
int n = sizeof(arr)/sizeof(arr[0]);
int prefix[n];
int sufix[n];
prefix[0] = arr[0];
sufix[n-1] = arr[n-1];
// fill prefix array
for(int i = 1;i<=n;i++){
    prefix[i] = prefix[i-1] + arr[i];
}
// fill sufix array
for(int i = n-2;i>=0;i--){
    sufix[i] = sufix[i+1] + arr[i];
}

for(int i = 0;i<n;i++){
    if(sufix[i] == prefix[i]){
        cout<<i;
        break;
    }
}
}