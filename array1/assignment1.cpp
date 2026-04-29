//Calculate the product of all the elements in the given array.
/*
#include<iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    int arr[n];
    for(int i = 0;i<=n-1;i++){
        cin>>arr[i];
    }
    int product = 1;
     for(int i = 0;i<=n-1;i++){
        product=product*arr[i];
    }
    cout<<product;
    return 0;
}
*/

//Find the second largest element in the given Array in one pass.
/*
#include<iostream>
#include<climits>
using namespace std;
int main(){
    int n;
    cin>>n;
    int arr[n];
    for(int i = 0;i<=n-1;i++){
        cin>>arr[i];
    }
    int max =INT_MIN;
    int smax =INT_MIN;
    for(int i = 0;i<=n-1;i++){
        if(max<arr[i]){
            smax = max;
            max = arr[i];
        }
        else if(max!=arr[i] && smax<arr[i]){
                smax = arr[i];
            }
        }
    cout<<smax;
    return 0;}
    */

//Find the minimum value out of all elements in the array.

/*
#include<iostream>
#include<climits>
using namespace std;
int main(){
    cout<<"Enter no of arrays"<<endl;
    int n;
    cin>>n;
    int arr[n];
    cout<<"Enter the value of arrays"<<endl;
    for(int i =0;i<=n-1;i++){
        cin>>arr[i];
    }
    int min = INT_MAX ;
    for(int i =0;i<=n-1;i++){
        if(min>arr[i]){
            min = arr[i];
        }
    }
    cout<<min;
    return 0;
}
*/

//Given an array, predict if the array contains duplicates or not.

/*
#include<iostream>
using namespace std;
int main(){
    int arr[]={1,2,3} ;
    int n = sizeof(arr)/sizeof(arr[0]);
    sort(arr,arr+n)
    bool flag = false;
    for(int i = 0 ;i<=2;i++){
       if(arr[i]==arr[i+1]){
       flag = true;
       break;
       } 
    }
    cout<<flag;
    return 0;
}
*/

//Given an array, predict if the array contains duplicates or not.
/*
#include<iostream>
using namespace std;
int main(){
    int arr[4]={1,2,3,1} ;
    bool flag = false;
    for(int i = 0;i<=3;i++){
        for(int j = i+1;j<=3;j++){
            if(arr[i]=arr[j]){
                flag = true;
                break;
            }
            else flag = false;
        }
    }
    if(flag==true)cout<<"duplicate present";
    else{cout<<"Not present";}
    return 0;
}
*/
//WAP to find the smallest missing positive element in the sorted Array that contains only positive element

// #include<iostream>
// using namespace std;
// int main(){
//     int arr[5]={1,2,5};  
//     int x ; 
//     for(int i = 0;i<3;i++){
//         x = arr[i]+1;
//         if(x!=arr[i+1]){
//             x = arr[i]+1;
//             break;
//         }
//     }
//     cout<<x;
//     return 0;
// }


#include<iostream>
#include<climits>
using namespace std;
int main(){
    int arr[] = {1,3,2,4,5};
    int n = sizeof(arr)/sizeof(arr[0]);
    int fmax = INT_MIN;
    int smax = INT_MIN;
    for(int i = 0;i<n;i++){
        if(fmax<arr[i]){
            smax = fmax;
            fmax = arr[i];
        }
        else if(smax<fmax && smax<arr[i]){
        smax =  arr[i];
        }
    }

    cout<<fmax<< " " << smax;

    
    return 0;
}

