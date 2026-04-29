/*
#include<iostream>
using namespace std;
int main(){
    int a = 3;
    int* ptr = &a;
    cout<<&a<<" "<<ptr;
}
*/

//dereference operater
/*
#include<iostream>
using namespace std;
int main(){
    int a = 3;
    int*ptr = &a;
    cout<<*ptr;
}
*/

#include<iostream>
using namespace std;
int main(){
    int a = 3;
    int*ptr = &a;
    cout<<"Old value "<<a<<endl;
    *ptr = 4;
     cout<<"new value "<<a;
}
