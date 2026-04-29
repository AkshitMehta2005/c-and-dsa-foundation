//fibonachii series

// #include<iostream>
// using namespace std;
// int main(){
//     int a = 0;
//     int b = 1;
//     int c;
//     for(int i = 0;i<5;i++){
//     cout<<a<<" ";
//     c = a+b;
//     a = b;
//     b = c;
//     }
// return 0;
// }

#include<iostream>
using namespace std;
int fibo(int n){
    if(n==1 || n == 2)return 0;
    return fibo(n-1)+fibo(n-2);
}
int main(){
    //1 1 2 3 5 8 13 21 34
    cout<<fibo(7);
return 0;
}