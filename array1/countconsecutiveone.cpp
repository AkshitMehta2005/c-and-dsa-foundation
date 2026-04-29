#include<iostream>
using namespace std;
int main(){
    int arr[] = {1,1,0,0,1,1,1,1,1,0,0,0,0,1,1,1};//max = 4
    int n = sizeof(arr)/sizeof(arr[0]);
    int count = 0;
    int max = 0;
    for(int i = 0;i<n;i++){
        if(arr[i]==1)count++;
        else{count = 0;}
        if(max<count){
            max = count;
        }
         
    }
    cout<<max;
    return 0;
}


























