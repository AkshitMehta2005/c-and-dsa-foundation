// long subarray with sum<=k 


// brute force o(n2)

// #include <iostream>
// using namespace std;

// int main() {
//     int arr[] = { -1, 2, 3, 3, 4, 5, -1 };
//     int k = 8;
//     int n = sizeof(arr) / sizeof(arr[0]);
 
//     int maxlen = 0;
//     int maxsum = 0;
//     for(int i = 0;i<n;i++){
//         int sum = 0;
//         for(int j = i;j<n;j++){
//             sum+=arr[j];
//             if(sum<=k){
//                 maxlen = max(maxlen,j-i+1);
//                 maxsum = max(maxsum,sum);
//             }
//             else if(sum>k)break; // optimization
//         }
//     }

//     cout<<maxlen<<" "<<maxsum<<" ";
//     return 0;
// }

// better approach

#include <iostream>
using namespace std;

int main() {
    int arr[] = { -1, 2, 3, 3, 4, 5, -1 };
    int k = 8;
    int n = sizeof(arr) / sizeof(arr[0]);
 
    int maxlen = 0;
    int l = 0;
    int sum = 0;
    int start = 0, end = 0;  // To store the start and end of the max subarray

    for (int r = 0; r < n; r++) {
        sum += arr[r];  // Add the current element to the sum

        // Shrink the window from the left if sum exceeds k
        while (sum > k) {
            sum -= arr[l];
            l++;
        }

        // Update the maximum length of subarray if sum is less than or equal to k
        if (sum <= k) {
            if (r - l + 1 > maxlen) {
                maxlen = r - l + 1;
                start = l;  // Store the start of the max subarray
                end = r;    // Store the end of the max subarray
            }
        }
    }

    cout << "Maximum length of subarray: " << maxlen << endl;
    cout << "Subarray with sum <= " << k << ": ";
    
    // Print the subarray
    for (int i = start; i <= end; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;

    return 0;
}
