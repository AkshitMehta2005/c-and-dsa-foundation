#include <iostream>
#include <set> // unorderset :- not in sorted order and same as set
using namespace std;

int main() {
    set<int> s;
    // NOTE:- sorted or Unique only
    s.insert(1);
    s.insert(2);
    s.insert(3);
    s.insert(4);
    s.insert(4);
    s.insert(4);

    auto it = s.find(5);

    // if(it!=s.end())cout<<"True"; // iska matlab mil gya
    // else cout<<"false;"

    

    // s.erase(3);

    
    for(auto it:s){
        cout<<it<<" ";
    }

    return 0;
}
