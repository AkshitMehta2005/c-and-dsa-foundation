#include<iostream>
#include<set>
#include<vector>
using namespace std;
int main(){
  int arr1[4] = {1,2,3,3};
  int arr2[6] = {1,3,2,2,3,4};
  set<int>s1;
  for(int i = 0;i<4;i++){ // o(n)
    s1.insert(arr1[i]); // 0(logn)          -->O(nlogn)
  }
  for(int i = 0;i<6;i++){
    s1.insert(arr2[i]);
  }
  vector<int>v;
  for(auto it:s1){
    v.push_back(it);
  }
  int n = v.size();
  for(int i = 0;i<n;i++){
    cout<<v[i]<<" ";
  }
return 0;
}