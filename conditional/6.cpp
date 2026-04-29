//cheak the element is alphabet or not

//note -> A = 65 ,a to z = 97 , 0 = 48
#include<iostream>
using namespace std;
int main(){
    char n1;
    cout<<"Enter the alphabet" <<endl;
    cin>>n1;
    int ascii = (int)n1;
    if((ascii>=65 && ascii<=90) || (ascii>=97 && ascii<=122)){
        cout<<"alphabet";
    }
    else{
        cout<<"number or special char";
    }
    return 0;
}