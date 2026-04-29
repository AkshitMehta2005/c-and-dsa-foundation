#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int specialArray(vector<int>& nums) {
    sort(nums.begin(), nums.end());
    int n = nums.size();
    
    for (int i = 0; i < n; i++) {
        int x = n - i; // Number of elements greater than or equal to nums[i]
        if (nums[i] >= x && (i == 0 || nums[i - 1] < x)) {
            return x;
        }
    }
    
    return -1;
}

int main() {
    vector<int> nums = {3, 5};
    cout << specialArray(nums) << endl; // Output: 2
    return 0;
}
