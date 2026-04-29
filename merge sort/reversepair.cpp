class Solution {
public:
    int inversion(vector<int>& a, vector<int>& b) {
        int count = 0, i = 0, j = 0;
        while (i < a.size() && j < b.size()) {
            if (a[i] > 2LL * b[j]) { // Use 2LL to avoid integer overflow
                count += (a.size() - i);
                j++;
            } else {
                i++;
            }
        }
        return count;
    }

    void merge(vector<int>& a, vector<int>& b, vector<int>& res) {
        int i = 0, j = 0, k = 0;
        while (i < a.size() && j < b.size()) {
            if (a[i] <= b[j]) {
                res[k++] = a[i++];
            } else {
                res[k++] = b[j++];
            }
        }
        while (i < a.size()) {
            res[k++] = a[i++];
        }
        while (j < b.size()) {
            res[k++] = b[j++];
        }
    }

    int mergesort(vector<int>& v) {
        int n = v.size();
        if (n <= 1) return 0;

        int mid = n / 2;
        vector<int> left(mid), right(n - mid);
        
        // Copy data to left and right subarrays
        for (int i = 0; i < mid; i++) left[i] = v[i];
        for (int i = 0; i < n - mid; i++) right[i] = v[i + mid];

        int count = mergesort(left) + mergesort(right);
        count += inversion(left, right);
        merge(left, right, v);

        return count;
    }

    int reversePairs(vector<int>& nums) {
        return mergesort(nums);
    }
};
