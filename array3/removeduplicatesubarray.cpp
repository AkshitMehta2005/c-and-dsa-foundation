#include<iostream>
#include<climits>
#include<unordered_set>
using namespace std;

int main() {
    int arr[] = {1, 2, 3, 1, 1, 1, 5};
    int n = 7; // Number of elements in the array
    int k = 3; // Target sum
    int maxi = INT_MIN;
    int start = -1, end = -1;

    for (int i = 0; i < n; i++) {
        int sum = 0; // Initialize sum for each subarray
        unordered_set<int> uniqueElements;

        for (int j = i; j < n; j++) {
            sum += arr[j];
            if (uniqueElements.find(arr[j]) != uniqueElements.end()) {
                break; // If duplicate element found, break the inner loop
            }
            uniqueElements.insert(arr[j]);

            if (sum == k && (j - i + 1) > maxi) {
                maxi = j - i + 1;
                start = i;
                end = j;
            }
        }
    }

    if (start != -1 && end != -1) {
        cout << "Non-duplicating subarray with sum " << k << ": ";
        for (int i = start; i <= end; i++) {
            cout << arr[i] << " ";
        }
    } else {
        cout << "No non-duplicating subarray found with sum " << k;
    }

    return 0;
}

