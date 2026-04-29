#include<iostream>
#include<stack>
using namespace std;

int main(){
    int arr[]={5,7,9,6,7,4,5,1,3,7};
    int n  = sizeof(arr)/sizeof(arr[0]);
    int pse[n]; // Array to store the next smallest elements

    // Print the original array
    for(int i = 0; i < n; i++){
        cout << arr[i] << " ";
    }
    cout << endl;

    stack<int> st;
    pse[n-1] = -1;  // The next smallest for the last element is always -1
    st.push(arr[n-1]);  // Push the last element to stack

    // Iterate from the second last element to the first
    for(int i = n - 2; i >= 0; i--) {
        // Pop elements that are greater than or equal to arr[i]
        while(st.size() > 0 && st.top() >= arr[i]) {
            st.pop();
        }

        // If the stack is empty, there is no smaller element, so set pse[i] = -1
        if(st.size() == 0) {
            pse[i] = -1;
        }
        else {
            // Otherwise, the top of the stack is the next smaller element
            pse[i] = st.top();
        }

        // Push the current element onto the stack
        st.push(arr[i]);
    }

    // Print the next smallest elements
    for(int i = 0; i < n; i++){
        cout << pse[i] << " ";
    }

    return 0;
}
