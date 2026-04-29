#include<iostream>
#include<vector>
using namespace std;
void printsubset(int arr[],int n ,int idx,vector<int>&ans){
    if(idx==n){
        cout<<ans[idx]<<endl;
        return;
    }
    printsubset(arr,n,idx+1,ans);
    ans.push_back(arr[idx]);
    printsubset(arr,n,idx+1,ans);
}
int main(){
int arr[]={1,2,3};
int n = sizeof(arr)/sizeof(arr[0]);
vector<int>v;
printsubset(arr,n,0,v);

return 0;
}