#include <iostream>
using namespace std;
class player
{
private:
    int health;
    int age;
    bool alive;

public:
    // setter
    void sethealth(int health)
    {
        this->health = health;
    }
    void setage(int age)
    {
        this->age = age;
    }
    void setalive(bool alive)
    {
        this->alive = alive;
    }
    // getter
    int gethealth()
    {
        return health;
    }
    int getage()
    {
        return age;
    }
    int getalive()
    {
        return alive;
    }
};
player maxhealth(player a, player b)
{
    if (a.gethealth() > b.gethealth())
        return a;
    else
        return b;
}
int addscore(player a, player b)
{
    return a.getage() + b.getage();
}

int main()
{
    player akshit;          // object creation statically program execute hone se phle memory allocate hop jati hai
    player pancholi;           
    player *urvi = new player; // run time ,dynamic allocation
    // urvi->sethealth(18); can also use
    player urviobject = *urvi; // value store kara di
    akshit.sethealth(80);
    akshit.setage(19);
    akshit.setalive(true);
    akshit.sethealth(21);
    akshit.setage(18);
    akshit.setalive(false);

    pancholi.sethealth(100);
    pancholi.setage(18);
    pancholi.setalive(true);

    urviobject.setage(19);
    urviobject.sethealth(75);
    urviobject.setalive(true);

    // cout << addscore(akshit,pancholi);
    // cout<<endl;
    //  cout<< maxhealth(akshit,pancholi); it gives error so uses other object

    //    player sanke = maxhealth(akshit,pancholi);
    //    cout<<sanke.gethealth()<<endl;
    //    cout<<sanke.getage()<<endl;
    return 0;
}