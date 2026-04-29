#include<iostream>
#include<algorithm> // for reverse
using namespace std;

string Wait(int n) {
    string res = "";
    while (n > 0) {
        if (n % 2 == 1) {
            res += '1';
        } else {
            res += '0';
        }
        n = n / 2;
    }
    reverse(res.begin(), res.end()); // Reverse to get the correct order
    return res;
}

int main() {
    int x = 17;
    cout << Wait(x);
}
