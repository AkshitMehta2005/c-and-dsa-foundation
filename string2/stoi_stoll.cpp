//stoi = string to interger
#include<iostream>
#include<string>
using namespace std;
int main(){
    // string s = "12345";
    // int n = stoi(s);
    // cout<<n+1;//it converted to number

    //stol = it convert string into long
    string str = "1234567899";
    long long n2 = stoll(str);
    cout<<n2+1;
    return 0;
}