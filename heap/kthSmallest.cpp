#include<iostream>
#include<queue>
using namespace std;
int main(){
priority_queue<int>pq; // max wala h

int arr[]={10,2,-1,2,3,4};
int n = sizeof(arr)/sizeof(arr[0]);
int k = 2;

for(int i  = 0;i<n;i++){
  pq.push(arr[i]);
  if(k<pq.size())pq.pop();
}
cout<<pq.top();
return 0;
}