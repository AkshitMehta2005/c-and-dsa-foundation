#include <iostream>
#include <algorithm>
#include <string>
#include <vector>

using namespace std;

int main() {
    // Example of generating permutations
    string s = "123";
    sort(s.begin(), s.end()); // Sort the string to start from the smallest lexicographical order

    cout << "Permutations of the string \"" << s << "\":" << endl;
    do {
        cout << s << endl;
    } while (next_permutation(s.begin(), s.end())); // Generate the next permutation

    // Example of finding the maximum element in an array
    int a[] = {1, 5, 3, 9, 7};
    int n = sizeof(a) / sizeof(a[0]); // Calculate the size of the array

    int maxi = *max_element(a, a + n); // Find the maximum element
    cout << "\nMaximum element in the array: " << maxi << endl;

    return 0;
}
