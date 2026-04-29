// Given an array of digits (values are from 0 to 9), the task is to find the minimum possible sum of
// two numbers formed from digits of the array. Please note that all digits of the given array must be
// used to form the two numbers.

// #include <iostream>
// #include<vector>

// using namespace std;
// int main() {
//    int arr[] = {5,1,5,5,2,3};
//     int n = 6;
//     for(int i = 1;i<=n-1;i++){
//         int j = i;
//         while(j>=1 && arr[j]<arr[j-1]){
//             swap(arr[j],arr[j-1]);
//             j--;
//         }
//     }
    
//     // fist smallest number
//     int x = 0;
//     for(int i = 0;i<n;i++){
//         x = x*10;
//         x+=arr[i];
//     }
    
    
//     // second smallest number will be 24576
//     for(int i = n;i>=1;i--){
//         if(arr[i-1]<arr[i]){
//             swap(arr[i-1],arr[i]);
//             break;
//         }
//     }
    
//     // 2nd smallest number
//     int y = 0;
//     for(int i = 0;i<n;i++){
//         y = y*10;
//         y+=arr[i];
//     }
    
//     cout<<x+y;
//     return 0;
// }

// Given an array of strings arr[] with all strings in lowercase. Sort given strings using Bubble Sort
// and display the sorted array.

#include <iostream>
#include<algorithm>
using namespace std;
int main()
{
    string arr[] = {"raghav","urvi","harsh","vishwa","sanket","hyder","priya","sudhanshu","manvi"};
    int n = 9;
    for(int i = 0;i<n-1;i++){
        bool flag = true; //already sorted
    for(int j = 0;j<n-1-i;j++){
        if(arr[j]>arr[j+1]){
            swap(arr[j],arr[j+1]);
            flag = false;
        }
        if(flag == true)break;
    }
    }
    for(int i = 0;i<n;i++){
        cout<<arr[i] <<" ";
    }
    }
   