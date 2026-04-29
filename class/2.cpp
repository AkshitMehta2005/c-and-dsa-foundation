#include<iostream>
using namespace std;
class op{
    public:
    int a;
    int b;
    void add(){
        cout<<(a+b)<<endl;
    }
    void add(int a,int b);
    void sub(){
        cout<<(a-b)<<endl;
    }
};

int main(){
    op calci;
    calci.a = 3;
    calci.b = 2;
    calci.add();
    calci.sub();
    return 0;
}