#include<iostream>
using namespace std;
int main(){
    string s = "akshit";
    s = s.substr(2,3); //substr(idx,length)
    cout<<s;
    return 0;
}




//print 2nd half
// #include<iostream>
// #include<string>
// using namespace std;
// int main(){
//     string s = "akshit"; // 0 1 2 3 4 5 
//     int n = s.length();
//     cout<<s.substr(n/2-1);
//     return 0;
// }