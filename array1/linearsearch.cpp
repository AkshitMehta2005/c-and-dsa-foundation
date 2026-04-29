#include<iostream>
using namespace std;
int main(){
    cout<<"Enter the number of element ";
    int n;
    cin>>n;
    int arr[n];
    cout<<"Enter the value of the element ";
    for(int i = 0;i<=n-1;i++){
        cin>>arr[i];
    }
    int find;
    cout<<"Enter the number that you want to find";
    cin>>find;
    bool flag = false;
    for(int i = 0;i<=n-1;i++){
        if(find==arr[i]){
           flag = true;
        }
    }
    if(flag==true)cout<<"present";
    else cout<<"Not present";
    return 0;
}