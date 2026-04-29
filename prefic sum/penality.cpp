#include<iostream>
#include<vector>
#include<string>
using namespace std;
int main(){
    string s = "YYNY";
    int n = s.size();
    vector<int>pre(n); // no of N
    vector<int>suff(n); // no of Y
    pre[0] = 0;
    for(int i = 0;i<n;i++){
        pre[i+1] = pre[i] + ((s[i]=='N')?1:0);
    }
    suff[n] = 0;
    for(int i = n-1;i>=0;i--){
        suff[i] = suff[i+1] + ((s[i]=='Y')?1:0);
    }
    int minpen = n;
    for(int i = 0;i<=n;i++){
        pre[i]+=suff[i];
        int pen = pre[i];
        minpen = min(pen,minpen);
    }
    for(int i = 0;i<=n;i++){
        int pen = pre[i];
        if(pen==minpen)return i;
    }
    cout<<n;
    return 0;
}