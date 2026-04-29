//calculate minimum number of bitsflip to convert into another number
/* example 5-->0101
11 --> 1011 minimum number of flip is 3 */
#include<iostream>
using namespace std;
int main(){
    int x = 5;
    int y = 11;
    cout<<__builtin_popcount(x^y);
    return 0;
}