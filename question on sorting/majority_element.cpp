// find the majority element of an array ---> majority element lie in n/2
#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
int main(){
    int n;
    cout<<"Enter the size of vector";
    cin>>n;
    vector<int>v(n); // use sort in built funtion bcz TC = O(log n)
    int m = v.size();
    for(int i = 0;i<m;i++){
        cin>>v[i];
    }
    sort(v.begin(),v.end());
    cout<<v[m/2];
    return 0;
}
