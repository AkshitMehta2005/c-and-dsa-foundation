#include <iostream>
#include <unordered_map>
using namespace std;

int main() {
    unordered_map<string, int> m;

    // Creating and inserting pairs
    pair<string, int> p1("akshit mehta", 7);
    pair<string, int> p2("naviya negi", 381);

    m.insert(p1);
    m.insert(p2);

    // 2nd method of insert
    m["Ram"] = 12; // key:value

    // Printing initial map content
    cout << "Initial map content:" << endl;
    for (const auto& p : m) {
        cout << p.first << " " << p.second << endl;
    }

    cout << endl;

    // Erasing element with key "Ram"
    m.erase("Ram");

    // Printing map content after erasure
    cout << "Map content after erasing 'Ram':" << endl;
    for (const auto& p : m) {
        cout << p.first << " " << p.second << endl;
    }

    return 0;
}
