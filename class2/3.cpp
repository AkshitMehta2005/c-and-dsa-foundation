// make classses of cricketer
#include<iostream>
using namespace std;
class Cricketer{
public:
char name;
int age;
int score;
};
int main(){
    Cricketer dhoni;
    dhoni.age = 50;
    dhoni.name = 'd';
    dhoni.score = 100;
    Cricketer virat;
    virat.age = 30;
    virat.name = 'v';
    virat.score = 50;

    Cricketer cricketor[2] = {dhoni,virat};
    for(int i = 0;i<2;i++){
        cout<<cricketor[i].age<<endl;
        cout<<cricketor[i].name<<endl;
        cout<<cricketor[i].score<<endl;
        cout<<"-----------------------------"<<endl;
    }
    return 0;
}