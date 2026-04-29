#include<iostream>
using namespace std;
void change(int b[],int size){
    b[0]=3;
}
int main(){
    int arr[]={1,2,3,4,5};
    int*ptr = arr; 
   // cout<<ptr<<endl; //ptr give the value of 1st element
    for(int i =0;i<=4;i++){
   // cout<<ptr[i]<<" ";
    cout<<*ptr<<" "; //without using square bracket
    ptr++;
    }
    ptr = arr; // help to not loss value of array only in *ptr case
    return 0;
}