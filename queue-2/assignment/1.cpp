// Remove last k elements of a queue.
//1823
#include<iostream>
#include<queue>
using namespace std;
int main(){
  queue<int>q;
    q.push(10);
    q.push(20);
    q.push(30);
    q.push(40);
    q.push(50);  
    int n = 5; // size of queue
    int k = 2; //last 2 element removal
    // n-k tak front pop and push in back
    for(int i = 0;i<n-k;i++){
        int x = q.front();
        q.pop(); // front pop ho jaiga
        q.push(x);
    }
    for (int i = 0; i < k; i++)
    {
       q.pop(); 
    }
    // print karna hai
    while (!q.empty()) {
        cout << q.front() << " ";
        q.pop();
    }
    
return 0;
}