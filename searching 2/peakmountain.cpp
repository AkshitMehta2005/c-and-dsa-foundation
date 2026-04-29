// peak index in mountain [852] // code will be right
#include <iostream>
#include <vector>
using namespace std;
int main()
{
    vector<int> arr(5);
    arr.push_back(1);
    arr.push_back(2);
    arr.push_back(5);
    arr.push_back(4);
    arr.push_back(1);
    int n = 5;
    int lo = 0;
    int hi = n - 1;
    bool flag = false;
    while (lo <= hi)
    {
        int mid = hi + (hi - lo) / 2;
        if (arr[mid] > arr[mid - 1] && arr[mid] > arr[mid + 1])
        {
            cout << mid;
            flag = true;
            break;
        }
        else if (arr[mid] > arr[mid + 1])
        {
            hi = mid - 1;
        }
        else
        {
            lo = mid + 1;
        }
    }
    return 0;
}