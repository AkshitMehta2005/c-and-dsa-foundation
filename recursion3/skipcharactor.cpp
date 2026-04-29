#include<iostream>
// #include<string>
// using namespace std;
// int main(){
//     string s = "akshit Mehta";
//     string empty = "";
//     for(int i = 0;i<s.length();i++){
//     if(s[i]!='t'){
//         empty+=s[i];
//     }
//     }
//     cout<<empty;
//     return 0;
// }

//also do remove onces

//space consuming

// #include<iostream>
// using namespace std;
// void removechar(string ans,string original){
// if(original.length()==0){
//     cout<<ans;
//     return;
// }
// char ch = original[0];
// if (ch=='p')removechar(ans,original.substr(1));
// else{
//     removechar(ans+ch,original.substr(1));
// }
// }
// int main(){
//     string str = "physics wallah";
//     removechar("",str);
//     return 0;
// }

//optimise way
#include<iostream>
using namespace std;
void removechar(string ans,string original,int idx){
if(idx == original.length()){
    cout<<ans;
    return;
}
char ch = original[idx]; //idx = 0
if (ch=='p')removechar(ans,original,idx+1);
else{
    removechar(ans+ch,original,idx+1);
}
}
int main(){
    string str = "physics wallah";
    removechar("",str,0); //0 repesenmt index
    return 0;
}
// dount how to remove one in arr