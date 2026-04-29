//calculate wheather the number is 3 digit number or not
/*
#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter the number ";
    cin>>n;
    if(n>=100 && n<1000){
        cout<<"Threee digit number";
    }
    else{
        cout<<"not 3 digit number";
    }
    return 0;
}
*/

//find the number is divisable by 3 and 5
#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter the number ";
    cin>>n;
    if(n%3==0 && n%5==0){
        cout<<"disvisable by both number";
    }
    else{
        cout<<"not divisable by both ";
    }
    return 0;
}