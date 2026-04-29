//Count the number of elements strictly greater than x.
/*
#include<iostream>
using namespace std;
int main(){
    int x;
    cin>>x;
    int arr[5];
    for(int i = 0 ;i<5;i++){
        cin>>arr[i];
    }
    int count = 0;
    for(int i = 0 ;i<5;i++){
        if(arr[i]>x){count++;}
    }
    cout<<count;
    return 0;
}
*/

//WAP to find the largest three elements in the array.

// #include<iostream>
// #include<climits>
// using namespace std;
// int main(){
//     int arr[]={1,4,5,6,3};
//     int max1 = INT_MIN;
//     int max2 = INT_MIN;
//     int max3 = INT_MIN;
//     int n = 5;
//     for(int i = 0;i<n;i++){
//     if(arr[i]>max1){
//     max1 = arr[i];
//     }
//     }
//     for(int i = 0;i<n;i++){
//     if(arr[i]<max1 && arr[i]>max2){
//     max2 = arr[i];
//     }
//     }

//     for(int i = 0;i<n;i++){
//     if(arr[i]<max2 && arr[i]>max3){
//     max3 = arr[i];
//     }
//     }
//     cout<<max1<<" "<<max2<<" "<<max3;
//     return 0;
// }

//Check if the given array is sorted or not.

// #include <iostream>
// using namespace std;
// int main() {
// int arr[5]={1,2,2,4,7};
// for (int i = 1; i < 5; i++){
// // Unsorted pair found
// if (arr[i - 1] > arr[i]){
// cout<<"NO"<<endl;
// return 0;
// }
// }
// // No unsorted pair found
// cout<<"YES"<<endl;
// return 0;
// }

// the unique number in a given Array where all the elements are being repeated twice with one value being unique.

#include<iostream>
using namespace std;
int main(){
    int arr[] = {1,1,2,2,3};
    int n = 5;
    int res = arr[0];
    for(int i = 1;i<n;i++){
        res = res^arr[i]; // best xor
    }
    cout<<res;
    return 0;
}

//find the given array is palendrome or not

// #include<iostream>
// using namespace std;
// int main(){
//     int n = 5;
//     int arr[n] = {1,2,3,2,1};
//     bool flag = true;
//     for(int i = 0;i<n;i++){
//         if(arr[i] !=arr[n-i-1]){
//           flag = false;
//           break;
//         }
//     }
//     if(flag==true)cout<<" palendrome";
//     else{cout<<" not palendrome";}
//     return 0;
// }