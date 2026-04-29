// print of array

// #include<iostream>
// #include<vector>
// using namespace std;
// void display(int arr[],int n,int idx){
//     if(idx==n)return;
//     cout<<arr[idx]<<" ";
//     display(arr,n,idx+1);
// }
// int main(){
//     int n;
//     cin>>n;
//     int arr[n];
//     for(int i = 0 ;i<n;i++){
//         cin>>arr[i];
//     }
// display(arr,n,0);   
// return 0;
// }

//print vector
#include<iostream>
#include<vector>
using namespace std;
void display2(vector<int>&v,int idx){
    if(idx==v.size())return;
    cout<<v[idx]<<" ";
    display2(v,idx+1);
}
int main(){
int n ;
cin>>n;
vector<int>v(n);
for(int i = 0;i<n;i++){
    cin>>v[i];
}
display2(v,0);   
return 0;
}