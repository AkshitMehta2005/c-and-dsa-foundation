#include<iostream>
using namespace std;
int main(){
    int target;
    cin>>target;
    int n,m;
    cin>>n;
    cin>>m;
    int arr[n][m];
    bool flag = false;
    for(int i = 0 ;i<n;i++){
        for(int  j = 0 ;j<m;j++){
           cin>>arr[i][j];
        }
    }
    int i = 0;
    int j = m-1;
    while(i<n && j>=0){
       if(target==arr[i][j]) flag = true;
       if(arr[i][j]>target)j--;
        else{i++;}
    }
    return 0;
}