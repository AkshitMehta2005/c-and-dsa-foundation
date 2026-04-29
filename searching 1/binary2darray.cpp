// BS-24. Search in a 2D Matrix - I | Binary Search of 2D

#include <iostream>
#include <vector>
using namespace std;

bool matrixSearch(vector<vector<int>>& mat, int target) {
    int n = mat.size();
    int m = mat[0].size();
    int lo = 0;
    int hi = m * n - 1;
    
    while (lo <= hi) {
        int mid = lo + (hi - lo) / 2;
        int row = mid / m;
        int col = mid % m;
        
        if (mat[row][col] == target) return true;
        else if (mat[row][col] < target) lo = mid + 1;
        else hi = mid - 1;
    }
    
    return false;
}

int main() {
    // Define a matrix (sorted row-wise and column-wise)
    vector<vector<int>> mat = {
        {1, 3, 5, 7},
        {10, 11, 16, 20},
        {23, 30, 34, 60}
    };

    int target = 3;  // Target value to search in the matrix

    // Call the matrixSearch function
    bool result = matrixSearch(mat, target);

    // Output the result
    if (result) {
        cout << "Element " << target << " found in the matrix." << endl;
    } else {
        cout << "Element " << target << " not found in the matrix." << endl;
    }

    return 0;
}
