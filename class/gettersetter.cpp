#include<iostream>
using namespace std;
class player
{
private: 
int score;
int hp;

public: 
//setter
void setscore(int s){
    score = s;
}
void sethealth(int h){
    hp = h;
}
//getter
int getscore(){
    return score;
}
int gethealth(){
    return hp;
}
};

int main(){
    player akshit;
    akshit.setscore(19);
    akshit.sethealth(100);
    cout<<akshit.getscore()<<endl;
    cout<<akshit.gethealth()<<endl;
    return 0;
}