// set ke ander unique element hote hai or increase order mai print hota hai
#include<iostream>
#include<set>
#include<map>
using namespace std;
int main(){
    // set<int>s;
    // s.insert(5);
    // s.insert(3);
    // s.insert(1);
    // for(int ele: s){
    //     cout<<ele<<" ";
    // }
    map<int, int> m;
    m[10]=1;
    m[30]=3;
    m[20]=2;
   
    for(auto x: m){ // key sorted ati hai accending mai // key deside karti hai value
        cout<<x.first<<" - "<<x.second<<" "<<endl;
    }
return 0;
}