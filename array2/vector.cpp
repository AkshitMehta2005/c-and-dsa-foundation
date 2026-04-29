#include <iostream>
#include <vector>
using namespace std;
int main()
{
    vector<int> v;
    // inserting value
    v.push_back(6);
    //cout << v.capacity();
    cout << v.size();
    v.push_back(4);
   // cout << v.capacity();
    // cout << v.size();
    v.push_back(3); // they double their size
   // cout << v.capacity();
    // cout << v.size();
   v.push_back(8);
    //cout << v.capacity();
    // cout << v.size();
    // updating value and  display value
    v[3] = 6;
    cout<<v.size();
    // cout << v[0];
    // cout << v[1];
    // cout << v[2];
    // cout << v[3];
    return 0;
}