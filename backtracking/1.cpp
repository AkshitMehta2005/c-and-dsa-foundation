// M color graph

//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends

class Solution {
public:
    bool isSafe(int node, int color[], bool graph[101][101], int n, int col) {
        for (int k = 0; k < n; k++) {
            if (k != node && graph[k][node]==1 && color[k] == col) {
                return false;
            }
        }
        return true;
    }

    bool solve(int node, int color[], int m, int N, bool graph[101][101]) {
        if (node == N) return true;
        for (int i = 1; i <= m; i++) {
            if (isSafe(node, color, graph, N, i)) {
                color[node] = i;  // Assign color i to the current node
                if (solve(node + 1, color, m, N, graph)) return true;
                color[node] = 0;  // Backtrack
            }
        }
        return false;
    }

    bool graphColoring(bool graph[101][101], int m, int N) {
        int color[N] = {0};  // Initialize all vertices with no color
        return solve(0, color, m, N, graph);
    }
};


//{ Driver Code Starts.

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n, m, e;
        cin >> n >> m >> e;
        int i;
        bool graph[101][101];
        for (i = 0; i < n; i++) {
            memset(graph[i], 0, sizeof(graph[i]));
        }
        for (i = 0; i < e; i++) {
            int a, b;
            cin >> a >> b;
            graph[a - 1][b - 1] = 1;
            graph[b - 1][a - 1] = 1;
        }
        Solution ob;
        cout << ob.graphColoring(graph, m, n) << endl;
    }
    return 0;
}