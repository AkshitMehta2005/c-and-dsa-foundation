#include <iostream>
#include <map> // O(logn) for storeing and feaching
#include <unordered_map> // O(1) for storeing and feaching // worst case O(n) due to internal collision
#include <vector>
using namespace std;

int main() {  
    map<int, int> mpp;  // Using map for sorted keys

    vector<int> arr = {1, 1, 2, 2, 1, 1, 4, 4};

    // Count the frequency of each element
    for (int i = 0; i < arr.size(); i++) {
        mpp[arr[i]]++;
    }

    // Print the frequency of the number 1
    cout << mpp[1];

    return 0;
}
