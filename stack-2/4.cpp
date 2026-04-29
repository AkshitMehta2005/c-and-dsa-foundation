// previous greater element
#include<iostream>
#include<stack>
using namespace std;
int main(){
    int arr[]={1,2,1,2,9};
    int n  = sizeof(arr)/sizeof(arr[0]);
    int ans[n];

    for(int i = 0;i<n;i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
    stack<int>st;
    ans[0] = -1;
    st.push(arr[0]);
    //pop
    for(int i = 1;i<n;i++){ // 1 se suru hoga
    while(st.size()>0 && st.top()<=arr[i])st.pop();
    //ans
    if(st.size()==0) ans[i] = -1;
    else ans[i] = st.top();
    //push
    st.push(arr[i]);
    }

    for(int i = 0;i<n;i++){
        cout<<ans[i]<<" ";
    }
return 0;
}