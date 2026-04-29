#include<iostream>
using namespace std;
int main(){
    int arr[]={1,2,3,4,5};
    int n = 5;
    bool flag = true;
    for(int i = 0;i<n-1;i++){
        for(int j = 0;j<n-1;j++){
        if(arr[j]>arr[j+1]){flag = false;}
    }}
    if(flag==true)cout<<"it is alreagy sorted";
    else{cout<<"not sorted";}
    return 0;
}