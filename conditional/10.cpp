// vovel and consonants
#include<iostream>
using namespace std;
int main(){
    char ch;
    cout<<"Enter the character";
    cin>>ch;
    if(ch=='a'||ch=='e'||ch=='i'||ch=='o'||ch=='u'){
        cout<<"vovel"; 
    }
    else{
      cout<<"consonant";
    }
    return 0;
}
