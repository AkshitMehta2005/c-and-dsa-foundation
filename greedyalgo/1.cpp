// 1710 //881
#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

// Comparator function to sort items based on value/weight ratio
bool cmp(pair<int, int>& p1, pair<int, int>& p2) { // {profit, weight}
    double r1 = (p1.first * 1.0) / (p1.second * 1.0);
    double r2 = (p2.first * 1.0) / (p2.second * 1.0);
    return r1 > r2; // decending order for accending order '<'
}

double FractionalKnapsack(vector<int>& profit, vector<int>& weights, int W, int n) {
    vector<pair<int, int>> arr;
    for (int i = 0; i < n; i++) {
        arr.push_back({ profit[i], weights[i] });
    }

    // Sort items by value/weight ratio in decreasing order
    sort(arr.begin(), arr.end(), cmp);

    double result = 0.0;

    for (int i = 0; i < n; i++) {
        if (arr[i].second <= W) {
            result += arr[i].first;
            W -= arr[i].second;
        } else { // (profit/weight) * W
            result += ((arr[i].first * 1.0) / (arr[i].second * 1.0)) * W;
            break;
        }
    }
    return result;
}

int main() {
    vector<int> profit = { 60, 100, 120 };
    vector<int> weights = { 10, 20, 30 };
    int W = 50;
    int n = 3;
    double maxProfit = FractionalKnapsack(profit, weights, W, n);
    cout << "Maximum profit: " << maxProfit << endl;
    return 0;
}
