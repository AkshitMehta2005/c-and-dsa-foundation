// print subsequence by recursion
#include<iostream>
#include<vector>
using namespace std;
void f(int i,vector<int>&ds,int arr[],int n){
    if(i==n){ // print kar do 
       for(auto it: ds){
        cout<<it<<" ";
       }
       if(ds.size()==0)cout<<"{}";
       cout<<endl;
       return;
    }
    // pick 
    ds.push_back(arr[i]);
    f(i+1,ds,arr,n);

    // not pick
    ds.pop_back();
    f(i+1,ds,arr,n);  
}

int main(){
    int arr[] = {3,1,2};
    int n = 3;
    vector<int>ds;
    
    f(0,ds,arr,n);
    return 0;
}