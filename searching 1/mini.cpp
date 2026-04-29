//given a sorted array of n element and a target 'x'.find the first occurance of x in nthe array .if x does not exist return 1.
#include<iostream>
using namespace std;
int main(){
    int arr[]={1,2,2,3,3,3,4,4,4,4,5,5,9};
    int lo = 0;
    int n = 13;
    int hi = n-1;
    int target ;
    cin>> target;
    bool flag = false;
    while(lo<=hi){
        int mid = lo + (hi-lo)/2;
        if(arr[mid]==target){
            if(arr[mid-1]!=target){
                flag = true;
                cout<<mid;
                break;
            }
            else{hi = mid-1;}
        }
        else if(arr[mid]<target)lo=mid+1;
        else{hi = mid-1;}
    }
    if(flag==false){
        cout<<-1;
    }
    return 0;
}