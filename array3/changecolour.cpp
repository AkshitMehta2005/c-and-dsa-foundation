// leet code 75 // sort arr[] = {1,2,2,1,3,3}

// #include<iostream>
// using namespace std;
// int main(){
//     int arr[] = {1,2,2,1,3,3};
//     int n = 6;
//     int no1 = 0;
//     int no2 = 0;
//     int no3 = 0;
//     for(int i = 0;i<n;i++){
//        if(arr[i]==1)no1++;
//        if(arr[i]==2)no2++;
//        if(arr[i]==3)no3++;
//     }

//     for(int i = 0;i<n;i++){
//        if(i<no1)arr[i] = 1;
//        else if(i<no1+no2)arr[i] = 2;
//        else arr[i]=3;
//     }

//     for(int i = 0;i<n;i++){
//       cout<<arr[i]<<" ";
//     }
//     return 0;
// }

//dutch falg algorithm

#include<iostream>
using namespace std;

void swap(int &a, int &b) {
    int temp = a;
    a = b;
    b = temp;
}

int main() {
    int arr[] = {1, 2, 2, 1, 0,0};
    int n = 6;
    int mid = 0;
    int lo = 0;
    int hi = n - 1;
    
    while (mid <= hi) {
        if (arr[mid] == 2) {
            swap(arr[mid], arr[hi]);
            hi--;
        }
        if (arr[mid] == 0) {
            swap(arr[mid], arr[lo]);
            lo++;
            mid++;
        }
        if (arr[mid] == 1) {
            mid++;
        }
    }
    
    for (int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }
    
    return 0;
}
