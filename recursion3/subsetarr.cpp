// writ the subset of the array
#include<iostream>
#include<vector>
using namespace std;
void print(int arr[],int idx,vector<int>v,int n){
if(idx==n){
    for(int i = 0;i<v.size();i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
    return;
}
print( arr, idx+1,v,n);
v.push_back(arr[idx]);
print( arr, idx+1,v,n);
}
int main(){
    int arr[]={1,2,3};
    int n = sizeof(arr)/sizeof(arr[0]);
    vector<int>v;
    print(arr,0,v,n);
    return 0;
}