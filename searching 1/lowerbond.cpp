#include<iostream>
using namespace std;
int main(){
    int arr[6]={1,2,3,4,5,6};
    int n = 6;
    int lo = 0; //index number
    int hi = n-1;
    int lower;
    cin >> lower;
    bool flag =  false;
    while(lo<=hi){
        int mid = (lo + (hi-lo)/2 );
        if(arr[mid]==lower){cout<<arr[mid-1];
        flag = true;
        break;}
        else if(arr[mid]<lower){lo = mid+1;}
        else{hi = mid - 1;}
    }
    if(flag==false)cout<<arr[hi];
    return 0;
}