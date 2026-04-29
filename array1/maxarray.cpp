// #include <iostream>
// using namespace std;
// int main()
// {
//     int n;
//     cout << "Enter the number of array ";
//     cin >> n;
//     int arr[n];
//     cout << "Enter array ";
//     for(int i = 0;i<=n-1;i++){
//         cin>>arr[i];
//     }
//     int max = arr[0];
//     for(int i = 0;i<=n-1;i++){
//         if(max<i){
//             max = arr[i];
//         }
//     }
//     cout<<max;
//     return 0;
// }

// sexy way
#include <iostream>
#include<climits>
using namespace std;
int main()
{
    int n;
    cout << "Enter the number of array ";
    cin >> n;
    int arr[n];
    cout << "Enter array ";
    for(int i = 0;i<=n-1;i++){
        cin>>arr[i];
    }
    int max = INT_MIN;
    for(int i = 0;i<=n-1;i++){
        if(max<i){
            max = arr[i];
        }
    }
    cout<<max;
    
    return 0;
}