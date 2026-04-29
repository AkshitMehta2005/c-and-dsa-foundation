// Input a string of size n and update all the odd positions in the string to character ‘#’. Consider
// 0-based indexing.
// Input : str = "Pbwcshkuiglhlds"
// Output : "P#w#s#k#i#l#l#s"

// #include<iostream>
// #include<string>
// using namespace std;
// int main(){
//     string str;
//     getline(cin,str);
//      int n = str.size();
//     for(int i = 0;i<str.size();i++){
//         if(i%2)str[i]='#';
//     }
//     cout<<str;
//     return 0;
// }

// Input a string of length n and count all the consonants in the given string.
// Input : "pwians"
// Output : 4
// Input : "abdc"
// Output : 3

// #include<iostream>
// #include<string>
// using namespace std;
// int main(){
//     cout<<"Enter the string"<<endl;
//     string str ;
//     getline(cin,str);
//     int count = 0;
//     for(int i = 0;i<str.size();i++){
//         if(str[i] != 'a' and str[i] != 'e' and str[i] != 'i' and str[i] != 'o' and str[i] != 'u' and str[i] != 'U' and str[i] != 'A' and str[i] != 'E' and str[i] != 'I' and str[i] != ')'){
//             count++;
//         }
//     }
//     cout<<count;
//     return 0;
// }

//Input a string of even length and reverse the second half of the string.
// #include <bits/stdc++.h>
// using namespace std;
// int main() {
// int n;
// cin >> n;
// string s;
// cin >> s;
// if(s.size()%2 != 0) cout<<"Invalid input."<<endl;
// else{
// reverse(s.begin() + n / 2, s.end());
// cout << s;
// }
// }
//Input a string of length less than 10 and convert it into integer without using builtin function. "1234"=1234
#include<iostream>
#include<string>
using namespace std;
int main(){
    string s = "12345";
    int n =  s.length();
    int sum = 0;
    int product = 1;
    for(int i = n-1 ; i>=0 ; i--){
      sum = sum + (s[i] - '0')*product; 
      product = product*10; 
    }
    cout<<sum;
    return 0;
}
