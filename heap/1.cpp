#include<iostream>
#include<queue>
using namespace std;
int main(){
  priority_queue<int>pq; // used for max heap
  pq.push(10);
  pq.push(30);
  pq.push(20);

  // cout<<pq.top();


  priority_queue< int,vector<int>,greater<int> >q; // min heap
 
   q.push(10);
  q.push(30);
  q.push(20);
   cout<<  q.top();
return 0;
}