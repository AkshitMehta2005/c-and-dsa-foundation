// gfg question:- minimum cost of all ropes

#include <bits/stdc++.h>
using namespace std;

class Solution
{
    public:

    long long minCost(long long arr[], long long n) {
        priority_queue<long long, vector<long long>, greater<long long>> pq; // min heap
        for(long long i = 0; i < n; i++){
            pq.push(arr[i]);
        }
        long long sum = 0;
        while(pq.size() > 1){
            long long x = pq.top();
            pq.pop();
            long long y = pq.top();
            pq.pop();
            
            long long newRope = x + y;
            sum += newRope;
            pq.push(newRope);
        }
        return sum;
    }
};

//{ Driver Code Starts.
int main() {
    long long t;
    cin >> t;
    while (t--) {
        long long n;
        cin >> n;
        long long i, a[n];
        for (i = 0; i < n; i++) {
            cin >> a[i];
        }
        Solution ob;
        cout << ob.minCost(a, n) << endl;
    }
    return 0;
}

// } Driver Code Ends
