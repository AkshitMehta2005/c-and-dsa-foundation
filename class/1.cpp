#include<iostream>
using namespace std;
class player
{
public:
int score; // data member
void showhealth(){
    cout<<"my health is 100";
}
string card;
private: // abstraction mean chupana
int hp;

};

int main(){
    player akshit;
    akshit.score = 100;
    akshit.card = "red"; 
    cout<<akshit.score<<endl;
    cout<<akshit.card<<endl;
    akshit.showhealth();
    // akshit.hp = 100; mean private h
    return 0;
}