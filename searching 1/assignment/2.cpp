// Given a sorted binary array, efficiently count the total number of 1’s in it.
// Input 1 : a = [0,0,0,0,1,1]

// Output 1: 2
#include<iostream>
using namespace std;
int main(){
    int arr[6] ={0,0,0,0,1,1};
    int lo = 0;
    int n = 6;
    int hi = n-1;
    int target = 1;
    bool flag = false;
    int idx = -1;
    for(int i = 0;i<n;i++){
        int mid = lo + (hi-lo)/2;
        if(arr[mid]==target){
         idx = mid;
         flag  = true;
         break;
         }
        
        else if(arr[mid]<target){
            lo = mid+1;
        }
        else{
            hi = mid - 1;
        }
    }
    if(flag == true){
      cout<<n-idx ; 
    }
    
    return 0;
}