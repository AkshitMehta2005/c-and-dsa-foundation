// substring of abc

//bad space complexcity

// #include<iostream>
// #include<string>
// using namespace std;
// void substring(string ans,string orginal){
//     if(orginal.length()==0){
//         cout<<ans<<endl;
//         return;
//     }
//     char ch = orginal[0];
//     substring(ans+ch,orginal.substr(1));
//     substring(ans,orginal.substr(1));
// }
// int main(){
//     string str = "abc";;
//   substring("",str);
// return 0;
// }

//2nd method

// #include<iostream>
// #include<string>
// using namespace std;
// void substring(string ans,string orginal,int idx){
//     if(orginal.length()==idx){ 
//         cout<<ans<<endl;
//         return;
//     }
//     char ch = orginal[idx];
//     substring(ans+ch,orginal,idx+1);
//     substring(ans,orginal,idx+1);
// }
// int main(){
//     string str = "abc";;
//   substring("",str,0);
// return 0;
// }

//store string
#include<iostream>
#include<vector>
using namespace std;
void storesubset(string ans,string orginal,vector<string>&v,int idx){
    if(orginal.length()==idx){
        v.push_back(ans);
        return;
    }
    char ch = orginal[idx];
    storesubset(ans+ch,orginal,v,idx+1);
    storesubset(ans,orginal,v,idx+1);
}
int main(){
vector<string>v; 
string str = "abc"; 
storesubset("",str,v,0);
for(string ele:v){
    cout<<ele<<endl;
}
return 0;
}