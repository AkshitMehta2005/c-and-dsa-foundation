// print only that even indexing element (starrting 0 as even)
#include <iostream>
#include <queue>
#include <stack>
using namespace std;
void display(queue<int> &q)
{
    for (int i = 0; i < q.size(); i++)
    {
        int x = q.front();
        cout << x << " ";
        q.pop();
        q.push(x);
    }
    cout << endl;
}
int RemoveAtEvenIdx(queue<int>& q){
    int n = q.size();
    for(int i = 0;i<n;i++){
        if(i%2==0){
            q.pop();
        }
        else{
            int x = q.front();
            q.pop();
            q.push(x);
        }
    }
}

int main()
{
    queue<int> q;
    q.push(10);
    q.push(20);
    q.push(30);
    q.push(40);
    q.push(50);
    display(q);
    RemoveAtEvenIdx(q);
    display(q);
    return 0;
}