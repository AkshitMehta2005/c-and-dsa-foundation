// next greater element

#include<iostream>
#include<stack>
using namespace std;
int main(){
    int arr[]={3,1,2,7,4,6,2,3};
    int n  = sizeof(arr)/sizeof(arr[0]);
    int ans[n];
    //applying brute force

    // for(int i = 0;i<n;i++){
    //    ans[i] = -1;
    //    for(int j = i+1;j<n;j++){
    //     if(arr[j]>arr[i]){
    //         ans[i] = arr[j];
    //         break;
    //     }
    //    }
    // }
    // for(int i = 0;i<n;i++){
    //    cout<<ans[i]<<" ";
    // }

    // using stack: o(n) and pop->ans->push and tc = o(n)
    stack<int>st;
    ans[n-1] = -1;  // last wala element ka koi greater element nahi hota toh -1 reherga
    st.push(arr[n-1]);
    for(int i = n-2;i>=0;i--){
        //pop all the element smaller then arr[i];
        while(st.size()>0 && st.top()<=arr[i]){
            st.pop();
        }
        // mark all ans in array
        if(st.size()==0)ans[i] = -1;
        else ans[i] = st.top();
        // push the arr[i]
        st.push(arr[i]);
    }

    for(int i = 0;i<n;i++){
        cout<<ans[i]<<" ";
    }
return 0;
}