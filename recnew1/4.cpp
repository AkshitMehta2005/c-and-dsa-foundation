// print 1 to n
// print n to 1
#include<iostream>
using namespace std;
void print(int n){
if(n==0)return; //base case 
print(n-1); // call
cout<<n<<endl; // kaam
}
int main(){
 print(5);
return 0;
}