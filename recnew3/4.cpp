// skip chararector

//bad space complexcity

// #include<iostream>
// #include<string>
// using namespace std;
// void skipchar(string ans, string str){
//     if(str.length()==0){
//         cout<<ans;
//         return;
//     }
//     char ch = str[0];
//     if(ch=='a')skipchar(ans,str.substr(1));
//     if(ch!='a')skipchar(ans+ch,str.substr(1));
// }
// int main(){
//     string str = "akshit mehta";
//     skipchar("",str);
// return 0;
// }

// good space complexcity  o(n)

// #include<iostream>
// #include<string>
// using namespace std;
// void skipchar(string ans, string str,int idx){
//     if(str.length()== idx){
//         cout<<ans;
//         return;
//     }
//     char ch = str[idx];
//     if(ch=='a')skipchar(ans,str,idx+1);
//     if(ch!='a')skipchar(ans+ch,str,idx+1);
// }
// int main(){
//     string str = "akshit mehta";
//     skipchar("",str,0);
// return 0;
// }



