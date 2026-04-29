#include<iostream>
using namespace std;

int main() {
    int n = 5;
    cout << ~n << endl; // Output: -6
    return 0;
}

// How It Works:
// 1 nvert the number to its binary representation.
// 2  Flip all the bits (invert 0 to 1 and 1 to 0).
// 3 if last 2 pow 32 is 1 so number is nagative do 2s complement. then do 4th step is negative numberlko
// 4  The result is interpreted as a signed integer in two's complement representation.