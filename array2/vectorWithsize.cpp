#include <iostream>
#include <vector>
using namespace std;
int main()
{
 // vector<int>v(4); //it mean vector with initial size 4
 vector<int>v(3,7);
cout<<"Size is :"<<v.size()<<endl;
cout<<"Capicity is :"<<v.capacity()<<endl;
cout<<v[0];
    return 0;
}