//"0021","0023","2031","32321" -->largest number = 32321
#include<iostream>
#include<string>
#include<vector>
using namespace std;
int main(){
   string arr[5];
   for(int i = 0;i<5;i++){
   getline(cin,arr[i]);}

   int max = stoi(arr[0]); 

   for(int i = 0;i<5;i++){
    int s = stoi(arr[i]);
    if(max<s)max = s;
   }
   cout<<"the maximum value will be "<<endl;
   cout<<max;
  
    return 0;
}