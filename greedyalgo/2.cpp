#include <iostream>
#include <vector>
#include <algorithm>
#include <climits>
using namespace std;

int minProduct(vector<int> &arr) {
    int cntNegative = 0, cntPositive = 0, cntZeros = 0;
    int prod_negative = 1;
    int prod_positive = 1;
    int largestNegative = INT_MIN;

    for (int i = 0; i < arr.size(); i++) {
        if (arr[i] < 0) {
            cntNegative++;
            prod_negative *= arr[i];
            largestNegative = max(largestNegative, arr[i]);
        }
        if (arr[i] > 0) {
            cntPositive++;
            prod_positive *= arr[i];
        }
        if (arr[i] == 0) {
            cntZeros++;
        }
    }

    if (cntNegative == 0) {
        if (cntZeros > 0) return 0;
        else {
            auto it = min_element(arr.begin(), arr.end());
            return *it;
        }
    } else {
        if (cntNegative % 2 == 0) {
            // Even count of negatives
            return (prod_negative / largestNegative) * prod_positive;
        } else {
            // Odd count of negatives
            return prod_negative * prod_positive;
        }
    }
}

int main() {
    vector<int> arr = {-2, -3, 1, 4, -2};
    cout << minProduct(arr) << endl;
    return 0;
}
