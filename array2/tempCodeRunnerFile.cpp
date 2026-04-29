#include<iostream>
using namespace std;
int main(){
    int arr[] = {1,1,2,2,3};
    int n = 5;
    int res = arr[0];
    for(int i = 1;i<n;i++){
        res = res^arr[i];
    }
    cout<<res;
    return 0;
}
