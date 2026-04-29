#include <iostream>
#include<string>
#include<climits>
#include<vector>
#include<sstream>
using namespace std;
int main() {
string arr[] = {"0025","232","1200","345678888"};  
for(int i = 0;i<arr.size();i++){
    arr[i] = stoi(arr[i]);
}
int maxi = -1;
for(int i = 0;i<arr.size();i++){
    if(arr[i]>maxi){
        maxi = arr[i];
    }
}
cout<<maxi;
    return 0;

}