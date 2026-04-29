// strair case when there is 3 jumps

#include<iostream>
using namespace std;
int stair(int n){
    if(n==1)return 1;
    if(n==2)return 2;
    if(n==3)return 3;
    return stair(n-1)+stair(n-2) + stair(n-3km,3wedcx );
}
int main(){
    //1 1 2 3 5 8 13 21 34
    cout<<stair(5);
return 0;
}