#include<iostream>
using namespace std;
void change(int a[3][3]){ //problem of 2darray is mention
    a[0][0] = 10;}
int main(){
    int arr[][3]={{1,2,3},{2,3,4},{5,8,9}};
    cout<<arr[0][0]<<endl;
    change(arr);
    cout<<arr[0][0]<<endl;
    return 0;
}