#include<iostream>
#include<queue>
using namespace std;
int main(){
priority_queue< int,vector<int>,greater<int> >q; // min wala h

int arr[]={10,2,-1,2,3,4};
int n = sizeof(arr)/sizeof(arr[0]);
int k = 3;

for(int i  = 0;i<n;i++){
  q.push(arr[i]);
  if(k<q.size())q.pop();
}
cout<<q.top();
return 0;
}