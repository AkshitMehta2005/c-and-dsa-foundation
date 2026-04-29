// //take even string
#include <bits/stdc++.h>
using namespace std;
int main(){
    string s = "akshit";
//    getline(cin,s);
   // int n = s.length();
    reverse(s.begin()+2, s.end()-1); 
    cout<<s;
    return 0;
}



// #include<bits/stdc++.h>
// using namespace std;
// int main()
// {
//     string str = "geeksforgeeks";
 
//     // Reverse str[begin..end]
//     reverse(str.begin(), str.end());
 
//     cout << str;
//     return 0;
// }