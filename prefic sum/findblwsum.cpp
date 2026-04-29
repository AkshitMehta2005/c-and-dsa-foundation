// arr[] = {1,3,6,10,15}
// find the sum blw 1 to 3
// 3-6 = 3

// #include<iostream>
// #include<vector>
// using namespace std;
// int main(){
//     int arr[] = {1,2,3,4,5,6};
//     int n = sizeof(arr)/sizeof(arr[0]);
//     vector<int>vec(arr,arr+n);
//     int a,b;
//     cin>>a>>b;
//     for(int i = 1;i<n;i++){
//         vec[i] = vec[i] + vec[i-1];
//     }
//     int sum = 0;
//     cout<<"The prefix sum is "<<endl;
//     for(int i = 0;i<n;i++){
//         cout<<vec[i]<<" ";
//     }
//     cout<<endl;
//     for(int i = a-1;i<b;i++){
//        sum = sum+vec[i];
//     }
//     cout<<sum;
//     return 0;
// }


#include <iostream>
using namespace std;
int main() {
    int arr[] = {1,2,3,4,5,6};
    int n = sizeof(arr)/sizeof(arr[0]);
   
    // prefix sum
    for(int i = 1;i<n;i++){
        arr[i] = arr[i]+arr[i-1];
    }
    int a,b;
    cin>>a>>b;
    
    int ans = arr[b] - arr[a-1];
    cout<<ans;
    return 0;
}