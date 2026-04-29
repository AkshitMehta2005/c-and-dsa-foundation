#include<iostream>
#include<climits>
using namespace std;
int main(){
    int arr[]={1,1,0,0,0,1,0,1};
    int max = INT_MIN;
    int count = 0;
    int n = sizeof(arr)/sizeof(arr[0]);
    for(int i = 0;i<n;i++){
    if(arr[i]==0)count++;
    else count = 0;
    if(max<count){
        max = count;
    }
    }
    cout<<max;
return 0;
}