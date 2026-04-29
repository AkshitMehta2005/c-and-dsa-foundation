// abstract class -> pure virtual class -> base mai only delearation 

#include<iostream>
using namespace std;

class Vehicle {
public:
    int tyre;
    int engineSize;

    virtual void calculateMilage() = 0;
    virtual void refuel() = 0;
};

class Bike : public Vehicle {
public:
    int handle;

    void calculateMilage() override {
        cout << "Milage" << endl;
    }

    void refuel() override {
        cout << "Refuel" << endl;
    }
};

int main() {
    Bike b;
    b.refuel();
    return 0;
}
