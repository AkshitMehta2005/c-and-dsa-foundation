// #include<iostream>
// using namespace std;
// int set_bit(int n){
//     return __builtin_popcount(n);
// }
// int main(){
//    cout << set_bit(15);
//     return 0;
// }

#include<iostream>
using namespace std;
int set_bits(int n){
    int count = 0;
    while(n>0){
        count++;
        n = (n & n - 1);
    }
    return count;
}
int main(){
    cout<<set_bits(22);
  
    return 0;
}