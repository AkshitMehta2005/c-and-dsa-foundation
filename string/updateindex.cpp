//update even index
// #include<iostream>
// using namespace std;
// int main(){
//     string str ="abcde";
//     cout<<str<<endl;
//     for(int i = 0;str[i]!=0;i++){
//         if(i%2==0)str[i]='a';
//     }
//     cout<<str; //abada
//     return 0;
// }

#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"enter the size";
    cin>>n;
    char str[n];
    for(int i = 0;i<n;i++){
        cin>>str[i];
    }
    cout<<str<<endl;
    // for(int i = 0;str[i]!=0;i++){
    //     if(i%2==0)str[i]='a';
    // }
    // cout<<str; //abada
    // return 0;
}
