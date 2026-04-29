#include<iostream>
#include<string>
using namespace std;
int convert_int_binary( string &str){
    int n = str.size();
    int result = 0;
    for(int i = n-1;i>=0;i--){
        char ch = str[i];
        int num = ch - '0';
        result = result + num*(1<<(n-i-1));
    }
    return result;
}
int main(){
    string str = "10010";
    cout<<convert_int_binary(str);  
    return 0;
}
