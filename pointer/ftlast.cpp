//write the function to written first and last digit of number
#include<iostream>
using namespace std;
void number(int n,int*ptr1,int*ptr2){
*ptr2 = n%10;
while(n>9){
    n = n/10;
}
*ptr1 = n;
}
int main(){
    int first,last,n,m;
    cout<<"Enter the number n";
    cin>>n;
    int*ptr1 = &first;
    int*ptr2 = &last;
    number(n,ptr1,ptr2);
    cout<<first<<" "<<last;
    return 0;
}
