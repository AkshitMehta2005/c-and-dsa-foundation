#include<iostream>
#include<string>
using namespace std;
string decimal_to_binary(int n){
    string result = "";
     while(n>0){
        if(n%2==0){ // last mai one ayega
        result = "0"+result;
        }
        else{//odd mai result mai 1 add kar do
        result =  "1"+result;
        }
        n = n/2;
     }
     return result;
}
int main(){
    //18 --> 10010
    cout<<decimal_to_binary(18);
    return 0;
}