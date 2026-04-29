#include <iostream>
#include <string>
using namespace std;
int main() {
    std::string myString = "Hello, ";
    
    myString.push_back('W');  // Appends 'W' to the end of the string
    myString.push_back('o');  // Appends 'o' to the end of the string
    myString.push_back('r');  // Appends 'r' to the end of the string
    myString.push_back('l');  // Appends 'l' to the end of the string
    myString.push_back('d');  // Appends 'd' to the end of the string
    myString.push_back('!');  // Appends '!' to the end of the string

    std::cout << myString << std::endl;

    return 0;
}
