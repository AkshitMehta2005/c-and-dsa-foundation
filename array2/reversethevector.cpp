//by using extra array
#include <iostream>
#include <vector>
using namespace std;
void display_Rev(vector<int> &v)
{   
    for (int i = 0; i < 5; i++)
    {
        cout << v[i] << " ";
    }  
    cout<<endl;
}
int main()
{
    vector<int> v;
    cout<<"Enter the array";
    for (int i = 0; i < 5; i++)
    {
        int n;
        cin >> n;
        v.push_back(n);
    }
    display_Rev(v);
      vector<int>v2(v.size());
      cout<<"Reverse of the array "<<endl;
    for(int i = 0;i<v.size();i++){
        int j = v.size()-1-i; //i+j = size - 1
        v2[i]=v[j];
    }
    display_Rev(v2);
    return 0;
} 