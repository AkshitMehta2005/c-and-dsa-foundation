//sorting string and remove the element which is smalller than 'x'
#include<iostream>
#include<vector>
#include<string>
#include<algorithm>
using namespace std;
int main(){
    string s = "AZYZXBYDXJK";
    string str="";
    for(int i = 0;i<s.size();i++){
        if(s[i]>='X'){
        str.push_back (s[i]);
        }
    }
    int n = str.size();
    for(int i = 0;i<n-1;i++){
        for(int j = 0;j<n-1-i;j++){
            if(str[j]<str[j+1])swap(str[j],str[j+1]);
        }
    }
    cout<<str<<endl;
    return 0;
}
