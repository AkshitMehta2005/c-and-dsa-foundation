// replace 0 to n-1 by minimun 1-->0 then min 2--->1,then min 3--->2 without replace their postion
#include<iostream>
#include<vector>
#include<algorithm>
#include<climits>
using namespace std;
int main(){
    int arr[]={10,3,30,41,22};
    vector<int>v(5,0);
    int n = sizeof(arr)/sizeof(arr[0]);
    //printing array
    for(int i = 0;i<n;i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
    int count = 0;
    for(int i = 0;i<n;i++){
        int mindx = -1;
        int min = INT_MAX;
        for(int j = 0;j<n;j++){
        if(v[j]==1)continue;
        else{
            if(min>arr[j]){
                min = arr[j];
                mindx = j;
            }
        }
    }
    arr[mindx] = count;
    v[mindx] = 1;// visited
    count++;
    }
for(int i = 0;i<n;i++){
    cout<<arr[i]<<" ";
}
    return 0;
}

