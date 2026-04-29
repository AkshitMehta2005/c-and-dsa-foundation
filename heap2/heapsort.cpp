#include<iostream>
#include<queue>
using namespace std;

int main(){
priority_queue<int>pq;

int arr[] = {1,2,42,3,12,4,52,12};
int n = sizeof(arr)/sizeof(arr[0]);

for(int i = 0;i<n;i++){
    pq.push(arr[i]);
}

vector<int>ans;

for(int i = 0;i<n;i++){
      ans.push_back(pq.top());
      pq.pop();
}


for(int i = 0;i<ans.size();i++){
    cout<<ans[i]<<"  ";
}
}