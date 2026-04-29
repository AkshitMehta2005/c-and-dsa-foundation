// count number of total number of sum of k
#include<iostream>
#include<vector>
using namespace std;
int f(int i,int arr[],int n,int sum,int s,vector<int>ds){
    if(s>sum)return 0;
    if(i==n){
        if(s==sum){
            return 1;
        }
        else{
            return 0;
        }
    }

    ds.push_back(arr[i]);
    s+=arr[i];
    int left =  f(i+1,arr,n,sum,s,ds);  
  
    ds.pop_back();
    s-=arr[i];
    int right = f(i+1,arr,n,sum,s,ds);

    return left + right; 
}
int main(){
    int arr[] = {1,2,1};
    int n = 3;
    int sum = 2;
    vector<int>ds;
    cout<<f(0,arr,n,sum,0,ds);
    return 0;
}