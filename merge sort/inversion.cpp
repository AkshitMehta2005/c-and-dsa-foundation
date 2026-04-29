// inverion by using mere sort 
// Input: arr[] = {8, 4, 2, 1}
// Output: 6
// Explanation: Given array has six inversions: (8, 4), (4, 2), (8, 2), (8, 1), (4, 1), (2, 1).
#include<iostream>
#include<vector>
using namespace std;
int inversion(vector<int>& a,vector<int>& b){
    int count = 0 , i = 0,j = 0;
    while(i<a.size() && j<b.size()){
        if(a[i]>b[j]){
            count += (a.size() - i);
            j++;
        }
        else{
            //a[i]<=b[j]
            i++;
        }
    }
    return count;
}


int merge( vector<int>&a,vector<int>&b,vector<int>&res){
int i = 0; // it is for a
int j = 0; // it is for b
int k = 0; // it is for c
while(i<a.size() && j<b.size()){
if(a[i]<=b[j]){
    res[k++]=a[i++];
}
else{
    res[k++]=b[j++];
}
}

if(i==a.size()){
    while(j<b.size())
    res[k++] = b[j++];
}

if(j==b.size()){
    while(i<a.size()){
        res[k++] = a[i++];
    }
}
}
int mergesort(vector<int>&v){
    int count = 0;
    int n = v.size();
    if(n==1) return 0;
    int n1 = n/2 , n2 = n - n/2;
    vector<int>a(n1),b(n2);
    //copy pasting 
    for(int  i =0;i<n1;i++){
        a[i] = v[i];
    }
    for(int  i = 0;i<n2;i++){
        b[i] = v[i+n1];
    }
    count += mergesort(a);
    count += mergesort(b);
    //count no of inversions
    count += inversion(a,b);
    //merge
    merge(a,b,v);
    a.clear(); // it help to make small space complexity like o(n)
    b.clear();
    return count;
}
int main(){
    int arr[] = {5,1,3,0,4,9,6}; // (5,1),(5,3),(5,0),(5,4), (1,0),(3,0),(9,6)
    int n = sizeof(arr)/sizeof(arr[0]);
    vector<int>v(arr,arr+n); // same as arr,copy
    for(int i = 0 ;i<v.size();i++){
        cout<<v[i]<<" ";
    }
    cout<<endl;
    cout<<mergesort(v);
}
