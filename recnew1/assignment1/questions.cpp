// Write a program to calculate the sum of odd numbers between a and b (both inclusive) using recursion.

// #include<iostream>
// using namespace std;
// int sum1ton(int a,int b){
// if(a>b)return 0;
// if(a%2==0)return sum1ton(a+1,b);
// return a+sum1ton(a+2,b);
// }
// int main(){
// cout<<sum1ton(1,5); 
// return 0;}

//Calculate the number of ways in which a person can climb n stairs if he can take exactly 1, 2 or 3steps at each level.

#include <bits/stdc++.h>
using namespace std;
int findno(int n) {
if(n < 0) return 0;
if(n == 0)return 1;
return findno(n-1) + findno(n-2) + findno(n-3);
}
int main() {
int n;
cin >> n;
cout << findno(n) << endl;
return 0;
}

//Given a positive integer, return true if it is a power of 2.



/*
#include<iostream>
using namespace std;
int pow2(int n){
    if(n==1)return true;
    if(n%2==0){
       return pow2(n/2);
    }
    return false;
}
int main()
{
 if(pow2(8)){
    cout<<"yes";
 }
 else{
    cout<<"no";
 }
return 0;
}
*/

