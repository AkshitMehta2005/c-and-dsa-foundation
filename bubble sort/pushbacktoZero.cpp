// push back to Zero and maintain their order
#include <iostream>
using namespace std;
int main()
{
    int arr[] = {5, -4, 0, 0, 26, 1, 99, -80};
    int n = 8; // size

    for(int i = 0;i<n-1;i++){
        for(int j = 0;j<n-1;j++){
            for(int j = 0;j<n-1-i;j++){ // -i time loop chlega or index less hoga
                if(arr[j]==0){
                swap(arr[j],arr[j+1]);}
            }
        }
    }
    cout<<endl;
    //after bubble sort
    for(int i = 0;i<n;i++){
        cout<<arr[i]<<" ";
    }
    
}