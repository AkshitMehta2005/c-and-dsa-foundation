// Sort the array in descending order using Bubble Sort.

// #include<iostream>
// using namespace std;
// int main(){
//     int arr[]={2,4,6,7};
//     int n = 4;
//     for(int i = 0;i<n-1;i++){
//         bool flag = true; //we think if it is already sorted
//         for(int j = 0;j<n-1-i;j++){
//             if (arr[j] < arr[j + 1])
//             {
//                 swap(arr[j], arr[j + 1]);
//                 flag = false;
//             }
//             if (flag == true)
//             {
//                 break;
//             }
//         }
//     }
//     for(int i = 0;i<n;i++){
//         cout<<arr[i]<<" ";
//     }
  
//     return 0;
// }

//Check if the given array is almost sorted. (elements are at-most one position away)
#include <iostream>
using namespace std;
int main()
{
    int arr[] = {4,2,7,9,8};
    int n = 5; // size
    int brr[n]; 
    //copy of array
    for(int i = 0;i<5;i++){
        brr[i]=arr[i];
    }

    for (int i = 0; i < n - 1; i++)
    {
        bool flag = true; // if already sorted
        for (int j = 0; j < n - 1 - i; j++)
        { // -i time loop chlega or index less hoga
            if (arr[j] > arr[j + 1])
            {
                swap(arr[j], arr[j + 1]);
                flag = false;
            }
            if (flag == true)
            {
                break;
            }
        }
    }
    // arr = 4 2 7 9 8
    // brr = 2 4 7 8 9
    // after bubble sort
    bool flag = true;
    for(int i = 0;i<n;i++){
    if(i==0){
        if(brr[i]!=arr[i] && brr[i]!=arr[i+1]){
            flag = false;
            break;
        }
    }
    else if(i==n-1){
            if(brr[i]!=arr[i] && brr[i]!=arr[i-1]){
            flag = false;
            break;
            }
        }

    else{
        if(brr[i]!=arr[i] && brr[i]!=arr[i-1] && brr[i]!=arr[i+1]){
            flag = false;
            break;
        }
    }
    }
    // for (int i = 0; i < n; i++)
    // {
    //     cout << arr[i] << " ";
    // }
    if(flag==true){cout<<"the given array is almost sorted";}
    else{cout<<"not in order of sorted";}
    return 0;
}