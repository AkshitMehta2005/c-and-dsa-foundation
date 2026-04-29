#include <iostream>
using namespace std;

class Anish; // Forward declaration

class Akshit {
private:
    int money = 50;

    // Friend function declaration
    friend void Anant(Akshit, Anish);
};

class Anish {
private:
    int money = 40;

    // Friend function declaration
    friend void Anant(Akshit, Anish);
};

// Friend function definition
void Anant(Akshit r1, Anish r2) {
    cout << "Thank you dost muje udar dene ke liye: " << r1.money + r2.money << endl;
}

int main() {
    Akshit obj1;
    Anish obj2;
    Anant(obj1, obj2); // Call with objects, not class names
    return 0;
}
