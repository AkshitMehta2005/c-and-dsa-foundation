// reverse the number

// #include<iostream>
// using namespace std;
// int main(){
//     int n = 123;
//     int rev = 0;
//     while(n!=0){
//      rev = rev*10 + n%10;
//      n = n/10;   
//     }
//     cout<<rev;
// return 0;
// }

// amgstrong number

// #include<iostream>
// using namespace std;
// int main(){
//     int n = 153;
//     int temp = n;
//     int sum = 0;
//     while(n!=0){
//       int x = n%10;
//       sum = sum + x*x*x;
//       n = n/10;
//     }
//     if(sum==temp)cout<<"amgstrobng number";
//     else cout<<"not";
// return 0;
// }


// prime number
#include<iostream>
using namespace std;
int main(){
    int n = 7;
    int flag = 0;
    for(int i = 2;i<n;i++){ 
        if(n%i==0){
         flag = 1;
         break;
        }
    }
    if(flag==1)cout<<"not prime number";
    else cout<<"prime number";
return 0;
}
