#include<iostream>
#include<sstream>
#include<string>
using namespace std;
int main(){
    string str = "my name is akshit mehta";
    string temp;
    stringstream ss(str);
    while(ss>>temp){
        cout<<temp<<endl;
    }
    return 0 ;
}