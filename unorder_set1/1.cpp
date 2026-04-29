#include<iostream>
#include<unordered_set>
using namespace std;
int main(){
    unordered_set<int>s;
    s.insert(1);
    s.insert(2);
    s.insert(3);
    s.insert(4);
    s.insert(5);
    s.insert(1);
    s.insert(2);
    s.insert(3);
    s.insert(4);
    s.insert(5);
    s.erase(5);
    //1

    // for(int ele:s){
    //     cout<<ele<<" ";
    // }
    // cout<<endl;
    // cout<<s.size();

    //2

    if(s.find(4)!=s.end()){
        cout<<"it exist"<<endl;
    }
    else{
        cout<<"not exist"<<endl;
    }

return 0;
}