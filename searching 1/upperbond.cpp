#include<iostream>
using namespace std;
int main(){
    int arr[6]={1,3,6,7,9,10};
    int n = 6;
    int lo = 0; //index number
    int hi = n-1;
    int higher;
    cin >> higher;
    bool flag =  false;
    while(lo<=hi){
        int mid = lo +(hi-lo)/2;
        if(arr[mid]==higher){
            flag = true;
            cout<<arr[mid+1];
            break;
        }
        if(arr[mid]<higher){lo = mid+1;}
        else{hi = mid -1;}
    }
    if(flag==false){
        cout<<arr[lo];
    }
    return 0;
}