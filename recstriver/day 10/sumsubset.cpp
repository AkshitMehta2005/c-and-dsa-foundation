// gfg queston // subsetSum


// leetcode 78
#include <vector>
#include <algorithm>
using namespace std;

class Solution {
public:
    void f(int idx, int sum, vector<int> &arr, int n, vector<int> &sumset) {
        if (idx == n) {
            sumset.push_back(sum);
            return;
        }
        // pick the element
        f(idx + 1, sum + arr[idx], arr, n, sumset);
        // do not pick the element
        f(idx + 1, sum, arr, n, sumset);
    }

    vector<int> subsetSums(vector<int> arr, int n) {
        vector<int> sumset;
        f(0, 0, arr, n, sumset);
        sort(sumset.begin(), sumset.end());
        return sumset;
    }
};
