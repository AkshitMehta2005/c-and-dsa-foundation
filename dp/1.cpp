// memorization TC:- O(n)  and SC:-   array<-o(n)+o(n) -> call stack 

// #include <iostream>
// #include <vector>
// using namespace std;
// int fibo(int n,vector<int>&dp){
    
//     if(n<=1)return n;
//     if(dp[n]!=-1)return dp[n];
//     return  dp[n] = fibo(n-1,dp)+fibo(n-2,dp);
// }
// int main() {
//     int n = 5;
//     vector<int>ds(n+1,-1);
//     cout<<fibo(n,ds);
//     return 0;
// }



// tablublation method  0(n) and 0(n)  much better then memorization

// #include <iostream>
// #include <vector>
// using namespace std;
// int main(){
//     int n = 5;
//     vector<int>dp(n+1);
//     dp[0] = 0;
//     dp[1] = 1;

//     for(int i = 2;i<=n;i++){
//         dp[i] = dp[i-1] + dp[i-2];
//     }
//     cout<<dp[n];
//     return 0;
// }


// for optimise the tabluation space O(n) and SC:- O(1)

#include <iostream>
#include <vector>
using namespace std;
int main(){
    int n = 5;
    int prev1 = 1; // n-1
    int prev2 = 0; // n-2

    for(int i = 2;i<=n;i++){
        int curr = prev1 + prev2;
        prev2 = prev1;
        prev1 = curr;
    }
    cout<<prev1;
    return 0;
}