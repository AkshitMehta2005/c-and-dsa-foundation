#include<iostream>
#include<queue>
#include<vector>
using namespace std;


// Given an array arr[], where each element is at most k away from its target position, you need to sort the array optimally.
// Note: You need to change the given array arr[] in place.

int main(){
  priority_queue< int,vector<int>,greater<int> >pq;
  int k = 4;
  vector<int>ans;
  
int arr[]={1,2,10,2,-1,2,3,4};
int n = sizeof(arr)/sizeof(arr[0]);
  for(int i = 0;i<n;i++){
    pq.push(arr[i]);
    if(pq.size()>k){
      ans.push_back(pq.top());
      pq.pop();
    }
  }

  while(pq.size()>0){
     ans.push_back(pq.top());
      pq.pop();
  }

  for(int i = 0 ;i<ans.size();i++){
    cout<<ans[i]<<" ";
  }
return 0;
}