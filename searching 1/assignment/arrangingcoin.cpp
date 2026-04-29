// You have n coins and you want to build a staircase with these coins. 
// The staircase consists of k rows where the ith row has exactly i coins. 
// The last row of the staircase may be incomplete.
// Given the integer n, return the number of complete rows of the staircase you will build.

// k*(k+1)/2<=n
#include<iostream>
using namespace std;
int main(){
    int n ;
    cin>>n;
    int hi = n-1;
    int lo = 0;
    bool flag = false;
    while(lo<=hi){
        int k = lo + (hi-lo)/2; //use as mid
        int m = k*(k+1)/2 ;
        if(m==n){
            flag = true;
            cout<<k;
            break;
        }
        if(m>n)hi = k - 1;
        if(m<n)lo = k+1;
    }
    if(flag ==false) cout<<hi;
    return 0;
}