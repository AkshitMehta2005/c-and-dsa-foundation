// Given an integer array. Find the length of longest subarray
// which has maximum possible bitwise AND value.
#include<iostream>
#include<climits>
using namespace std;
int main(){
  int arr[]={1,1,2,3,22,12,22,123,4,111,123,123};
  int n = sizeof(arr)/sizeof(arr[0]);
  int ans = 0;
  int max_el = INT_MIN;
  int cnt = 0;
  for(int i = 0;i<n;i++){
    if(arr[i]>max_el){
      max_el = arr[i];
      cnt = 1;
    }
    else if(arr[i]==max_el){
      cnt++;
    }
    ans = max(cnt,ans);
  }
 
  cout<<ans;
return 0;
}