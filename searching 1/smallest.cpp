//given a sorted array of non negative distinct intereger .find the smallest missing non negatiive element

// #include<iostream>
// using namespace std;
// int main(){
//     int arr[]={0,1,2,3,5,6};//we havbe to find 4
//     int n = 6;
//     for(int i = 0;i<n;i++){
//         if(i!=arr[i]){
//             cout<<i;
//             break;
//         }
//     }
//     return 0;
// }

#include<iostream>
using namespace std;
int main(){
    int arr[]={0,1,2,4,5,6,9,12};
    int lo = 0;
    int n = 8;
    int hi = n-1;
    int ans = -1;
    while(lo<=hi){
        int mid = lo + (hi-lo)/2;
        if(arr[mid]==mid)lo = mid+1;
        else{
            ans = mid;
            hi = mid - 1;
        }
    }
    cout<<ans;
    return 0;
}
