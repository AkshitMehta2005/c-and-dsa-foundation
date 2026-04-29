// 2182
#include <iostream>
#include <vector>
#include <algorithm>
#define ll long long int

using namespace std;

bool cmp(int x, int y) {
    return x > y;
}

ll minCostToBreakGrid(int n, int m, vector<ll>& vertical, vector<ll>& horizontal) {
    sort(vertical.begin(), vertical.end(), cmp);
    sort(horizontal.begin(), horizontal.end(), cmp);

    int hz = 1; // Number of horizontal cuts made
    int vr = 1; // Number of vertical cuts made

    int h = 0; // Index for horizontal costs
    int v = 0; // Index for vertical costs
    ll ans = 0; // Total cost

    while (h < horizontal.size() && v < vertical.size()) {
        if (vertical[v] > horizontal[h]) {
            ans += vertical[v] * vr;
            hz++;
            v++;
        } else {
            ans += horizontal[h] * hz;
            vr++;
            h++;
        }
    }

    while (h < horizontal.size()) {
        ans += horizontal[h] * hz;
        vr++;
        h++;
    }

    while (v < vertical.size()) {
        ans += vertical[v] * vr;
        hz++;
        v++;
    }

    return ans;
}

int main() {
    int n, m;
    cin >> m >> n;
    vector<ll> horizontal, vertical;
    
    for (int i = 0; i < m - 1; i++) {
        ll x; // Use ll here for consistency
        cin >> x;
        vertical.push_back(x);
    }
    
    for (int i = 0; i < n - 1; i++) {
        ll y; // Use ll here for consistency
        cin >> y;
        horizontal.push_back(y);
    }
    
    cout << minCostToBreakGrid(n, m, horizontal, vertical) << endl;

    return 0;
}
