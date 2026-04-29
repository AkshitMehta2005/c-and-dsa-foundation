#include <bits/stdc++.h>
using namespace std;


// top down approach

// // Function to compute the minimum energy required to reach the last stone using recursion + memoization
// int f(int idx, int k, vector<int>& dp, vector<int>& heights) {
//     if (idx == 0) return 0; // Base case: No cost at the first stone
//     if (dp[idx] != -1) return dp[idx]; // If already computed, return the stored value

//     int minstep = INT_MAX; // Initialize to MAX for minimization

//     for (int i = 1; i <= k; i++) {
//         if (idx - i >= 0) {
//             int jump = f(idx - i, k, dp, heights) + abs(heights[idx] - heights[idx - i]); 
//             minstep = min(minstep, jump);
//         }
//     }

//     return dp[idx] = minstep; // Store the result in dp
// }

// // Wrapper function to initialize dp and call recursive function
// int frogJump2(int n, int k, vector<int>& heights) {
//     vector<int> dp(n, -1); // Initialize DP array with -1
//     return f(n - 1, k, dp, heights); // Start recursion from the last stone
// }

// // Main function with predefined array
// int main() {
//     vector<int> heights = {10, 30, 40, 20, 50}; // Predefined stone heights
//     int n = heights.size();  // Number of stones
//     int k = 2;  // Maximum jumps allowed

//     int result = frogJump2(n, k, heights);
//     cout << "Minimum energy required: " << result << endl;

//     return 0;
// }



// botton up approach

int f(int idx,vector<int>heights,int k){
    int n = heights.size();
    vector<int>dp(n);
    dp[0] = 0;
   
    for(int i = 1;i<n;i++){
        int minstep = INT_MAX;
        for(int j = i;i<k;j++){
            if(j-i>=0){
                int jump = dp[i-j] + abs(heights[j]-heights[idx-j]);
                minstep = min(minstep,jump);
            }
        }
        dp[i] = minstep;
    }
}