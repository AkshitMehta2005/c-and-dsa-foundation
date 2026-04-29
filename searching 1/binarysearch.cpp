#include <iostream>
#include <algorithm> // Include the algorithm header for sort
using namespace std;

int main() {
    int arr[] = {1, 3, 2, 7, 4};
    int target = 4;
    int lo = 0;
    int n = sizeof(arr) / sizeof(arr[0]);
    int hi = n - 1;
    bool flag = false;

    sort(arr, arr + n); // Use the sort function from the algorithm header

    while (hi >= lo) {
        int mid = lo + (hi - lo) / 2;

        if (arr[mid] == target) {
            flag = true;
            break; // Break out of the loop once the element is found
        } else if (arr[mid] < target)
            lo = mid + 1;
        else
            hi = mid - 1;
    }

    if (flag) {
        cout << "Element found" << endl;
    } else {
        cout << "Not found" << endl;
    }

    return 0;
}
