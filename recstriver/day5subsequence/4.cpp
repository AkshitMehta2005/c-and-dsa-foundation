// Print Only the First Subsequence Which Sums to K

#include<iostream>
#include<vector>
using namespace std;

bool printFirstSubsequenceSumK(int i, int arr[], int n, int sum, int s, vector<int> &ds) {
    if (i == n) {
        if (s == sum) {
            for (auto it : ds) {
                cout << it << " ";
            }
            cout << endl;
            return true;
        }
        return false;
    }
    ds.push_back(arr[i]);
    s += arr[i];
    if (printFirstSubsequenceSumK(i + 1, arr, n, sum, s, ds)) return true;
    ds.pop_back();
    s -= arr[i];
    if (printFirstSubsequenceSumK(i + 1, arr, n, sum, s, ds)) return true;
    return false;
}

int main() {
    int arr[] = {1, 2, 1};
    int n = 3;
    int sum = 2;
    vector<int> ds;
    printFirstSubsequenceSumK(0, arr, n, sum, 0, ds);
    return 0;
}
