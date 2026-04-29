#include <iostream>
#include <vector>

using namespace std;

class Solution {
public:
    void merge(vector<int>& arr1, int m, vector<int>& arr2, int n) {
        vector<int> ans(m + n);
        int i = 0;
        int j = 0;
        int k = 0; // ans array ke liye

        // Compare and place into the array
        while (i < m && j < n) {
            if (arr1[i] <= arr2[j]) {
                ans[k] = arr1[i];
                i++;
            } else {
                ans[k] = arr2[j];
                j++;
            }
            k++;
        }

        // arr1 use ho gya ha ab arr2 use karo
        while (i < m) {
            ans[k] = arr1[i];
            k++;
            i++;
        }

        // arr2 use ho gya ha ab arr1 use karo
        while (j < n) {
            ans[k] = arr2[j];
            k++;
            j++;
        }

        // Copy the merged array back to arr1
        for (int i = 0; i < m + n; i++) {
            arr1[i] = ans[i];
        }
    }
};

int main() {
    Solution solution;

    // Example usage:
    vector<int> arr1 = {1, 2, 3};
    vector<int> arr2 = {2, 5, 6};
    
    solution.merge(arr1, 3, arr2, 3);

    // Print the merged array
    for (int i = 0; i < arr1.size(); i++) {
        cout << arr1[i] << " ";
    }
    cout << endl;

    return 0;
}
