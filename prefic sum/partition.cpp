#include<iostream>
using namespace std;
int main(){
    int arr[] = {1,7,3,6,5,6};
    int n = sizeof(arr)/sizeof(arr[0]);
    //we not taken one 
    for(int i = 1;i<n;i++){
        arr[i] = arr[i] + arr[i-1];
    }
    //printing prefic sum
    for(int i = 0;i<n;i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
    int idx = -1;
    for(int i = 1;i<n;i++){
        if(2*arr[i]==arr[n-1]){
        idx = i;
        break;
        }
    }
    if(idx!=-1){
    cout<<"yes it break in index  "<<idx;}
    else{cout<<"no partition";}
    return 0;
}