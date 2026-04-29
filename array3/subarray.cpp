#include<iostream>
#include<climits>
using namespace std;

int main() {
    int arr[] = {1, 2, 3, 1, 1, 1, 5};
    int n = 7; // Number of elements in the array
    int k = 3; // Target sum
    int maxi = INT_MIN;

    for (int i = 0; i < n; i++) {
        int sum = 0; // Initialize sum for each subarray
        for (int j = i; j < n; j++) {
            sum += arr[j];
            if (sum == k) {
                maxi = max(maxi, j - i + 1);
            }
        }
    }

    cout << maxi;

    return 0;
}
