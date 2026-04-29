// Sum of first N Natural Numbers

// parameterised way

// #include<iostream>
// using namespace std;
// int print(int i,int sum){
// if(i<1)return sum;
// return print(i-1,sum+i);
// }
// // function recusion
// int printf(int n){
//     if(n==0)return 0;
//     return n+printf(n-1);
// }

// int main(){
// //   cout<<print(5,0);
// cout<<printf(5);
//     return 0;
// }


// find factorial itterative


// #include<iostream>
// using namespace std;

// int main(){
//   int n = 5;
//   int factorial = 1;
//   for(int i = 2;i<=n;i++){
//     factorial = factorial*i;
//   } 
//   cout<<factorial;
// }


//  factorial by recursion 

// #include<iostream>
// using namespace std;
// int fact(int n){
//   if(n==0)return 1;
//   return n*fact(n-1);  
// }
// int main(){
//   int n = 5;
//   cout<<fact(n);
// }

// reverse the array

// #include<iostream>
// #include<vector>
// using namespace std;
// void Reverse(vector<int>&arr,int Sidx,int Eidx){
//   if(Sidx<Eidx){
//     swap(arr[Sidx],arr[Eidx]);
//     Reverse(arr,Sidx+1,Eidx-1);
//     return;
//   }
// }
// int main(){
//   vector<int>arr={1,2,3,4,5};
//   int n = arr.size();
//   Reverse(arr,0,n-1);
//   cout << "The reversed array is:- " << endl;
//    for (int i = 0; i < n; i++) {
//       cout << arr[i] << " ";
//    }
// }


// check palendrome in string

// #include<iostream>
// using namespace std;
// bool ispalandrome(int i, string& s){
//     if(i>=s.length()/2) return true;
//     if(s[i]!=s[s.length()-i-1]) return false;
//     return ispalandrome(i+1,s);
// }
// int main(){
//    string s = "abba";
//    bool flag = ispalandrome(0,s);
//    if(flag==true){
//     cout<<"Palandrome Number ";
//    }
//    else{
//     cout<<"Not palandrome Number";
//    }
// }

// fibonacnachi number

#include<iostream>
using namespace std;
int fibo(int n){
  if(n==1 || n==0)return n;
  return fibo(n -2)+fibo(n-1);  
}
int main(){ 
  int n = 7;
  cout<<fibo(n);
}

