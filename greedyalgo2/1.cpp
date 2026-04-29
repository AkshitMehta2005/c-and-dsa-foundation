#include <iostream>
#include <vector>
#include <algorithm> // For sort
using namespace std;

int minMeetingRooms(vector<vector<int>>& intervals) {
    vector<int> start, ending;
    for (auto ele : intervals) {
        start.push_back(ele[0]);
        ending.push_back(ele[1]);
    }

    sort(start.begin(), start.end());
    sort(ending.begin(), ending.end());

    int ans = 0;
    int rooms = 0;
    int i = 0, j = 0;
    while (i < start.size()) {
        if (start[i] < ending[j]) {
            // Meeting starts
            rooms++;
            ans = max(ans, rooms);
            i++;
        } else if(start[i] > ending[j]) {
            // Meeting ends
            rooms--;
            j++;
        }
        else{
            j++;
            i++;
        }
    }
    return ans;
}

int main() {
    vector<vector<int>> intervals = {{0, 30}, {5, 10}, {15, 20}};
    cout << "Minimum number of meeting rooms required: " << minMeetingRooms(intervals) << endl;
    return 0;
}
