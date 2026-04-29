//no of words
#include<iostream>
#include<sstream>
#include<string>
using namespace std;
int main(){
    string str = "my name is akshit";
    int count = 0;
    string temp;
    stringstream ss(str);
    while(ss>>temp){
        count++;
    }
    cout<<count;
    return 0;
}