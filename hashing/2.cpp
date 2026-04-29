#include<iostream>
using namespace std;

// hashing with lower case letter
int main(){
string m = "abcdefabceaaaa";

int hash[26] = {0};


for(int i = 0;i<m.size();i++){
    hash[m[i]-'a']++;
}

char find = 'a';
cout<<hash[find-'a'];
}