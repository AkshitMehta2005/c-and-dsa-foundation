#include <iostream>
using namespace std;
int main()
{   int n;
    cin>>n;
    int arr[n],sum = 0;
    cout << "Enter the number in array";
    for (int i = 0; i <= n-1; i++)
    {
        cin >> arr[i];
    }
    cout << "the sum of array will be :- ";
    for (int i = 0; i <= n-1; i++)
    {
        sum = sum + arr[i];
    }
    cout<<sum;
    return 0;
}