//product of an array it self without using division

// using division
// #include<iostream>
// using namespace std;
// int main(){
//     int  p = 1;
//     int arr[] = {1,2,3,4};
//     int n = sizeof(arr)/sizeof(arr[0]);
//     for(int i = 0;i<n;i++){
//           p = p*arr[i];
//     }
//     for(int i = 0;i<n;i++){
//           cout<<p/arr[i]<<" ";
//     }
//     return 0;
// }

//by using 1 extra array
#include<iostream>
#include<vector>
using namespace std;
int main(){
    int arr[] = {1,2,3,4};
    int n = sizeof(arr)/sizeof(arr[0]); // 4
    vector<int>pre(n);
    //for prefix a[]={1,1,2,6}
    pre[0] = 1;
    int p = arr[0];
    for(int i = 1;i<n;i++){
        pre[i]=p;// it mean arr[0]
        p = p*arr[i]; 
    }
    //suffix product array (in prefix only)
    p = arr[n-1];
    for(int i = n-2;i>=0;i--){
        pre[i] = p*pre[i];
        p=p*arr[i];
    }
    for(int i = 0;i<n;i++){
        cout<<pre[i]<<" ";
    }
    return 0;
}