
// lsit
#include <iostream>
#include <list>
using namespace std;

int main() {
    list<int> ls;

    ls.push_back(2);    // 2
    ls.push_back(3);    // 2, 3
    ls.emplace_front(1); // 1, 2, 3

    // Using an iterator to print the elements of the list
    for (auto it = ls.begin(); it != ls.end(); ++it) {
        cout << *it << " ";
    }

    return 0;
}
