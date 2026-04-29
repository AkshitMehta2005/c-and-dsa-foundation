// #include<iostream>
// using namespace std;
// int main(){
//     int x = 3;
//     cout<<(x = 5)<<endl;
//     cout<<(x-=10);
//     return 0;
// }


//predict the output 
#include<iostream>
using namespace std;
int main(){
    bool x = true;
    bool y = true;
    bool z = false;
    cout<<(x == y == z); //left to right
    return 0;
}