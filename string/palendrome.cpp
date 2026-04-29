//Check whether the given string is palindrome or not.
#include<iostream>
#include<string>
using namespace std;
int main(){
   string str;
   getline(cin,str);
    int i = 0;
    int j = str.size()-1;
    bool flag = false;
    while(i<=j){
        if(str[i]==str[j]){flag = true;}
        i++;
        j--;
    }
    if(flag==true){cout<<"it is palendrome string";}
    else{cout<<"not the palendrome string";}
    return 0;
}