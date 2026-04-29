// Print all the elements of an array in reverse order.
#include<iostream>
#include<vector>
using namespace std;
void display(int arr[],int n,int idx){
    if(idx==n)return;
    display(arr,n,idx+1);
    cout<<arr[idx]<<" ";
}
int main(){
    int n;
    cin>>n;
    int arr[n];
    for(int i = 0 ;i<n;i++){
        cin>>arr[i];
    }
display(arr,n,0);   
return 0;
}

//Print index of a given element in an array. If not present, print -1.
#include <bits/stdc++.h>
using namespace std;
int indexOfKey(vector<int> &arr, int currIndex, int n, int key) {
if(currIndex == n) {
return -1;
}
if(arr[currIndex] == key) {
return currIndex;
}
return indexOfKey(arr, currIndex+1, n, key);
}
int main() {
    int n, key;
    cin >> n;
    vector<int> arr(n);
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }
    key = 3;
    int result = indexOfKey(arr, 0, n, key); // Store the result in a variable.
    
    if (result != -1) {
        cout << "Key found at index " << result << endl;
    } else {
        cout << "Key not found in the vector." << endl;
    }

    return 0;
}
