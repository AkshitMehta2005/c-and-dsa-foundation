//move all negative number to begining and positive to end 
// example => arr[] = {1,-1,2,3,-2} -->{-2 -1 1 2 3}

#include<bits/stdc++.h>
using namespace std;
int main(){
    vector<int>arr;
    arr.push_back(1);
     arr.push_back(-1);
      arr.push_back(2);
       arr.push_back(3);
        arr.push_back(-2);
    sort(arr.begin(),arr.end());
   for(int i = 0;i<5;i++){
    cout<<arr[i]<<" ";
   }
    return 0;
}

