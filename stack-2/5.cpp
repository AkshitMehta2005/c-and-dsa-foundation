// stock span problem -->famous
// 2nd question // leet code 84
#include<iostream>
#include<stack>
using namespace std;
int main(){
    int arr[] = {100, 80, 60, 70, 60, 75, 85};
    // for storing next greater index
    int n = sizeof(arr)/sizeof(arr[0]);
    int pgi[n];
    pgi[0] = 1;// ye toh 1 karna hee hoga
    stack<int>st;
    st.push(0); 
    for(int i = 1;i<=n-1;i++){
    // pop karna ha index of array
    while(st.size()>0 && arr[st.top()]<=arr[i]){
        st.pop();
    }
    // answer mai index mark karni ha
    if(st.size()==0)pgi[i] = -1;
    else{
        pgi[i] = st.top();
    }
    pgi[i] = i - pgi[i];
    // push
    st.push(i);
    }
    for(int i = 0;i<n;i++){
        cout<<pgi[i]<<" ";
    }
return 0;
}

// brute force
//price[] = [100 80 60 70 60 75 85]



// #include<iostream>
// using namespace std;

// int main() {
//     int arr[] = {100, 80, 60, 70, 60, 75, 85};
//     int n = sizeof(arr) / sizeof(arr[0]);
//     int ans[n];

//     ans[0] = 1;

//     for (int i = 1; i < n; i++) {
//         int ct = 1;
//         for (int j = i - 1; j >= 0; j--) {
//             if(arr[i] >= arr[j])ct++;
//         }
//         ans[i] = ct;
//     }

//     for (int i = 0; i < n; i++) {
//         cout << ans[i] << " ";
//     }

//     return 0;
// }

