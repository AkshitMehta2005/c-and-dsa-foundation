//Given a matrix having 0-1 only where each row is sorted in increasing order, find the row with the
//maximum number of 1’s.

// leetcode 34
#include<iostream>
using namespace std;
int main(){
    int arr[4][4]={{0,1,0,1},{1,1,1,1},{0,0,1,1},{0,0,0,0}};
    int x = 1;
    int number = 4;
    int m = 4;
     int n = 4;
    int row = 0; //maximum number of 1
    int maxones = 0;
    for(int i = 0;i<m;i++){
    int lo = 0;
    int countones = 0;
    int hi = number-1;
    int firstidx = -1;
    while(lo<=hi){
        int mid = lo+(hi-lo)/2;
        if(arr[i][mid]==x){
            if(mid==0){
               firstidx = mid;
               break; 
            }
            else if(arr[i][mid-1]!=x){
            firstidx = mid;
            break;}
            else{
                hi = mid - 1;
            }
        }
        else if(arr[i][mid]<x){
            lo = mid + 1;
        }
        else{hi = mid - 1;}
    }
    if(firstidx != -1) countones = number - firstidx;
    if(maxones<countones){
        maxones = countones;
        row = i;
    }
}
cout<<row<<" "<<maxones;
 return 0;
}