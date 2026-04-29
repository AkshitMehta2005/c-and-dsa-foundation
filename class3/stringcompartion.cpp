#include <iostream>
#include <string>
using namespace std;

class String {
private:
    string str;

public:
    // Method to read a string from user input
    void read() {
        cin >> str;
    }

    // Overloaded operator == for comparing two String objects
    bool operator==( String &s)  {
        return str == s.str;
    }
};

int main() {
    // Create two String objects
    String A, B;

    // Read strings from user input
    cout << "Enter first string: ";
    A.read();

    cout << "Enter second string: ";
    B.read();

    // Compare the two strings using the overloaded operator ==
    if (A == B) {
        cout << "Equal" << endl;
    } else {
        cout << "Unequal" << endl;
    }

    return 0;
}
