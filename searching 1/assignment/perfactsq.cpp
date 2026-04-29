#include<iostream>
using namespace std;
int main(){
    int x;
    cin>>x;
    int lo = 0;
    int hi = x;
    bool flag = false;
    while(lo<=hi){
        int mid = lo + (hi -lo)/2;
        long long m = (long long)mid;
        long long y = (long long)x;
        if((m*m)==y) {flag = true; //perfect square
        cout<<m<<" prefact sq";
        break;}
        else if(m*m>y)hi = mid - 1;
        else lo = mid + 1;
    }
    if(flag==false){
    cout<<"not perfact square"; /// it return interger part
    }
    return 0;
}