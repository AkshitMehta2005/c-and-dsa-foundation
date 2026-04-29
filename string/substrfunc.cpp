#include<iostream>
#include<string>
using namespace std;

int main() {
    string str = "abcde";
    int n = str.size();

    // Outer loop to iterate over starting position of substrings
    for (int start = 0; start < n; ++start) {
        // Inner loop to iterate over end position of substrings
        for (int end = start; end < n; ++end) {
            // Print substring from start to end
            cout << str.substr(start, end - start + 1) << endl;
        }
    }

    return 0;
}
