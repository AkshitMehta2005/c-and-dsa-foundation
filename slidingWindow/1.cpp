// sum of maximum sub array in the particular k window

// #include <iostream>
// using namespace std;
// int main()
// {
//   int arr[] = { 7,2,1,5,8,4,9,3,6};
//   int n = sizeof(arr)/sizeof(arr[0]);
//   int k =3;
//   int max1 = -1;
//   for(int i = 0;i<=n-k;i++){
    
//      int sum = 0;
//      for(int j = i;j<k+i;j++){
//         sum = arr[j]+sum;
//      }
//      max1 = max(sum,max1);
//   } 
//   cout<<max1;
//   return 0;
// }

// improve complexity code

#include <iostream>
using namespace std;

int main() {
    int arr[] = { -1, 2, 3, 3, 4, 5, -1 };
    int k = 4;
    int n = sizeof(arr) / sizeof(arr[0]);

    // Initialize the sum of the first window
    int sum = 0;
    for (int i = 0; i < k; i++) {
        sum += arr[i];
    }

    // Set the initial maximum sum as the sum of the first window
    int mxsum = sum;

    // Slide the window across the array
    for (int i = k; i < n; i++) {
        sum = sum - arr[i - k] + arr[i]; // Slide the window: subtract the element that is leaving, add the new element
        mxsum = max(mxsum, sum); // Update the maximum sum
    }

    cout << "Maximum sum of subarray of size " << k << " is: " << mxsum << endl;

    return 0;
}
   