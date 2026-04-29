#include <iostream>
#include <string>
using namespace std;

int main() {
    string arr = "abbdeffghh";
    int n = arr.size();
    int cnt = 0;

    // Check the first character separately
    if (n > 0 && arr[0] != arr[1]) {
        cnt++;
    }

    // Check the middle characters
    for(int i = 1; i < n - 1; i++){
        if (arr[i] != arr[i - 1] && arr[i] != arr[i + 1]) {
            cnt++;
        }
    }

    // Check the last character separately
    if (n > 1 && arr[n - 1] != arr[n - 2]) {
        cnt++;
    }

    cout << cnt;
    return 0;
}
