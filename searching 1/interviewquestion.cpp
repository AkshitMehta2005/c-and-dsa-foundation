// You have a sorted array of infinite numbers, how would you search an element in the array?
#include <iostream>
#include <vector>
using namespace std;

class Solution {
public:
    int binarySearch(vector<int>& nums, int low, int high, int target) {
        while (low <= high) {
            int mid = low + (high - low) / 2;
            if (nums[mid] == target) return mid;
            else if (nums[mid] < target) low = mid + 1;
            else high = mid - 1;
        }
        return -1;
    }

    int searchInInfiniteArray(vector<int>& nums, int target) {
        // Initial range
        int low = 0;
        int high = 1;

        // Exponential increase to find the correct range
        while (high < nums.size() && nums[high] < target) {
            low = high;
            high = 2 * high;
        }

        // Adjust high to the last index if it exceeds the array size
        if (high >= nums.size()) {
            high = nums.size() - 1;
        }

        // Binary search within the found range
        return binarySearch(nums, low, high, target);
    }
};

int main() {
    Solution sol;

    // Create a large finite array to simulate an "infinite" sorted array
    vector<int> nums;
    for (int i = 1; i <= 1000000; i++) {  // Populate with 1 million elements
        nums.push_back(i);
    }

    int target = 567890;  // The element we want to search

    int result = sol.searchInInfiniteArray(nums, target);

    if (result != -1) {
        cout << "Element found at index: " << result << endl;
    } else {
        cout << "Element not found" << endl;
    }

    return 0;
}
