#include <bits/stdc++.h>
using namespace std;
void change(vector<int> &v) //by add and it for pass by reference
{
    v.at(0) = 2;
    for (int i = 0; i < v.size(); i++)
    {                                           //this is pass by value
        cout << v.at(i) << " ";
    }
}
int main()
{
    vector<int> v;
    v.push_back(6);
    v.push_back(4);
    v.push_back(2);
    v.push_back(9);
    for (int i = 0; i < v.size(); i++)
    {
        cout << v.at(i) << " ";
    }
    cout << endl;
    // cout << "change the value by using fucntion" << endl;
     change(v); // not able to change
    // for (int i = 0; i < v.size(); i++)
    // {
    //     cout << v.at(i) << " ";
    // }
    return 0;
}