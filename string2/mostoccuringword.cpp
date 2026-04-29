#include<iostream>
#include<vector>
#include<algorithm>
#include<string>
#include<sstream>
using namespace std;
int main(){
    string str = "is that good it is good";  //is 2
    string temp;
    stringstream s(str);
    vector<string>v; 
    //push_back kara temp ko   
    while(s>>temp){
        v.push_back(temp);
    }
    cout<<endl;
    //
    sort(v.begin(),v.end());
    //sorted value
    // for(int i  = 0;i<v.size();i++){
    //     cout<<v[i]<<" ";
    // }
    cout<<endl;
    int count = 1;
    int maxcount = 1;
    for(int  i = 1;i<v.size();i++){
    if(v[i]==v[i-1])count++;
    else{count = 1;}
    maxcount = max(count,maxcount);  //using max function
    }
    //we have max = 2
    count = 1;  //take count = 1 again
    for(int  i = 1;i<v.size();i++){
    if(v[i]==v[i-1])count++;
    else{count = 1;}
    if(count==maxcount)cout<<v[i]<<" "<<maxcount<<endl;
    }
    return 0;
}