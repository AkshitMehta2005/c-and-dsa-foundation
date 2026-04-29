#include <iostream>
#include <vector>
using namespace std;
// in this question dont take one index more then one time
void f(int i, vector<int> &ds, int s, int sum, int arr[], int n) {
    // Base case: If we've considered all elements
    if (i == n) {
        // Check if the current sum matches the target sum
        if (s == sum) {
            // Print the current subsequence
            for (auto it : ds) {
                cout << it << " ";
            }
            cout << endl;
        }
        return;
    }

    // Include the current element in the subsequence
    ds.push_back(arr[i]);
    s += arr[i];

    // Recur with the next element
    f(i + 1, ds, s, sum, arr, n);

    // Backtrack: Remove the current element from the subsequence
    s -= arr[i];
    ds.pop_back();

    // Exclude the current element from the subsequence
    f(i + 1, ds, s, sum, arr, n);
}

int main() {
    int arr[] = {1, 2, 1};
    int n = 3;
    int sum = 2;
    vector<int> ds;

    // Call the recursive function starting from the first index
    f(0, ds, 0, sum, arr, n);
    
    return 0;
}
