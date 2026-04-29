//for(int ele : arr){ //for each loop
//     cout<<ele<<" "
// }
#include <iostream>
#include<algorithm>
#include <climits>
using namespace std;
int main()
{
    int arr[] = {5,-1,2,4,6}; //1st step [-1,5,2,4,6],2nd step []
    //int n = sizeof(arr)/sizeof(arr[0]);
    int n = 5;
    for(int i = 0 ;i<n-1;i++){ // i = 0,1
        //find minimum element
        int min = INT_MAX;  // min =  6
        int mindx = -1;
        for(int  j = i;j<n;j++){ // j = 0,1,2-->2 mai break ho gya   j = 0,1,2,3
        if(arr[j]<min){   //arr[0]<6, arr[1]<5,arr[2]<-1--->break 
            min = arr[j] ;  // min = 5 , -1
            mindx = j;   // mindx = 0 , 1
        }
        }
        swap(arr[i],arr[mindx]);
    }
    for(int ele : arr){ //for each loop
    cout<<ele<<" ";
 }
    return 0;
}