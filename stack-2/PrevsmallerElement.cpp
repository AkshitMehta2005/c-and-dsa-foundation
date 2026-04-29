// prev smallest element  
#include<iostream>
#include<stack>
using namespace std;
int main(){
    int arr[]={5,7,9,6,7,4,5,1,3,7};
    int n  = sizeof(arr)/sizeof(arr[0]);
    int pse[n];

    for(int i = 0;i<n;i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
    stack<int>st;
    pse[0] = -1;
    st.push(arr[0]);
    //pop
    for(int i = 1;i<n;i++){ // 1 se suru hoga
    while(st.size()>0 && st.top()>=arr[i])st.pop();
    //pse
    if(st.size()==0) pse[i] = -1;
    else pse[i] = st.top();
    //push
    st.push(arr[i]);
    }

    for(int i = 0;i<n;i++){
        cout<<pse[i]<<" ";
    }
return 0;
}