#include <iostream>
using namespace std;
int main()
{
    int arr[] = {0, 1, 0, 2, 1, 0, 1, 3, 2, 1, 2, 1};
    int n = sizeof(arr) / sizeof(arr[0]);
    int ans[n];
    int mx = arr[0];
    ans[0] = -1; // first element ke liye
    // int mx = arr[0]; // 1st element mai hoga
    for (int i = 1; i < n; i++)
    {
        ans[i] = mx;
        if (mx < arr[i])
            mx = arr[i];
    }
    for (int i = 0; i < n; i++)
    {
        cout << ans[i] << " ";
    }
    return 0;
}