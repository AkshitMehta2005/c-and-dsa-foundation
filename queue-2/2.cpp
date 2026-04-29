// first negative window of size

// o(n)
// #include <bits/stdc++.h>
// using namespace std;
  
// // function to find the first negative
// // integer in every window of size k
// void printFirstNegativeInteger(int arr[], int n, int k)
// {
//     // flag to check whether window contains
//     // a negative integer or not
//     bool flag;
     
//     // Loop for each subarray(window) of size k
//     for (int i = 0; i<(n-k+1); i++)          
//     {
//         flag = false;
 
//         // traverse through the current window
//         for (int j = 0; j<k; j++)
//         {
//             // if a negative integer is found, then
//             // it is the first negative integer for
//             // current window. Print it, set the flag
//             // and break
//             if (arr[i+j] < 0)
//             {
//                 cout << arr[i+j] << " ";
//                 flag = true;
//                 break;
//             }
//         }
         
//         // if the current window does not
//         // contain a negative integer
//         if (!flag)
//             cout << "0" << " ";
//     }   
// }
  
// int main()
// {
//     int arr[] = {3,-4,-7,30,7,-9,2,1,5,-1};
//     int n = sizeof(arr)/sizeof(arr[0]);
//     int k = 3;
//     printFirstNegativeInteger(arr, n, k);
//     return 0;
// }



#include<iostream>
#include<queue>
#include<vector>
using namespace std;
int main(){
    int arr[] = {3,-4,-7,30,7,-9,2,1,5,-1};
    queue<int>q;
    vector<int>ans;
    int k = 3;
    int n = sizeof(arr)/sizeof(arr[0]);
    for(int i = 0;i<n;i++){
        if(arr[i]<0)q.push(i);
    }
    int i = 0;
    while(i<=n-k){
        while(q.size()!=0 && q.front()<i)q.pop(); // index queue mai lie nahi karta
        if(q.size()==0 || q.front()>=i+k)ans.push_back(0);
        else ans.push_back(arr[q.front()]);
        i++;
    }
    for(int i = 0;i<n;i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
    for(int i = 0;i<ans.size();i++){
        cout<<ans[i]<<" ";
    }
return 0;
}