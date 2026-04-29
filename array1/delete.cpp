#include <iostream>
using namespace std;
int main() {
   int arr[]={1,2,3,5,6};
   // 2 deletete karna ha index
   int n = 5;
   for(int i = 2;i<n;i++){
       arr[i] = arr[i+1];
   } 
   n--;
   for(int i = 0;i<n;i++){
     cout<<arr[i]<<" ";
   }
    return 0;
}