#include<iostream>
using namespace std;
int main(){
    int x = 7;
    int*ptr = &x;
    cout<<ptr<<endl;
    ptr = ptr + 1; //increase by 4 byte
    cout<<ptr<<endl;
    return 0;
}
