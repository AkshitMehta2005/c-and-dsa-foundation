#include <iostream>
using namespace std;

class Gun {
public:
    int ammo;
    int damage;
    int scope;
};

class Player {
private:
    int health;
    int age;
    bool alive;
    Gun gun; // Composition: Gun class is a member of Player class
public:
    // Setter methods
    void setHealth(int health) {
        this->health = health;
    }
    void setGun(Gun gun) {
        this->gun = gun;
    }
    void setAge(int age) {
        this->age = age;
    }
    void setAlive(bool alive) {
        this->alive = alive;
    }
    // Getter methods
    Gun getGun() {
        return gun;
    }
    int getHealth() {
        return health;
    }
    int getAge() {
        return age;
    }
    bool isAlive() {
        return alive;
    }
};

int main() {
    Gun akm;
    akm.damage = 200;
    akm.ammo = 100;
    akm.scope = 4;

    Gun awm;
    awm.ammo = 10;
    awm.damage = 400;
    awm.scope = 8;

    Player akshit;
    akshit.setAge(18);
    akshit.setAlive(true);
    akshit.setGun(akm);
    akshit.setHealth(100);
    
    Player ankur;
    ankur.setAge(17);
    ankur.setAlive(false);
    ankur.setGun(awm);
    ankur.setHealth(50);

    // Print the values of ankur
    cout << "Ankur's Age: " << ankur.getAge() << endl;
    cout << "Ankur's Gun Ammo: " << ankur.getGun().ammo << endl;
    cout << "Ankur's Health: " << ankur.getHealth() << endl;

    return 0;
}
