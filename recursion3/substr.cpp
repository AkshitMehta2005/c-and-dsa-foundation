#include<iostream>
using namespace std;
void removechar(string ans,string original,int idx){
if(idx == original.length()){
    cout<<ans<<endl;
    return;
}
char ch = original[idx]; //idx = 0
removechar(ans,original,idx+1);
removechar(ans+ch,original,idx+1);
}
int main(){
    string str = "abc";
    removechar("",str,0); //0 repesenmt index
    return 0;
}