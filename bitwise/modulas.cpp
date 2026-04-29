// #include<iostream>
// #include<climits>
// using namespace std;
// int main(){
//   int max = INT_MAX;
//   cout<<max<<"\n";
//  cout<<max%5<<"\n";
//  cout<<(max+2)%5<<"\n";//to get correct output
//  cout<<(max%5+2%5)%5<<"\n";
//  cout<<(max%5*2%5)%5<<"\n";
// return 0;
// }

// Print factorial of first 25 natural numbers and modulo the result by 109+7.
#include <iostream>
#include <vector>
using namespace std;

vector<long long int> factorial(int n)
{
  vector<long long int> fact(n + 1, 1);
  int mod = 1000000007;
  for (int i = 2; i <= n; i++)
  {
    fact[i] = ((i % mod) * (fact[i - 1] % mod)) % mod;
  }
  return fact;
}
int main()
{
  vector<long long int> res = factorial(25);
  for (int i = 0; i < res.size(); i++)
  {
    cout <<i<< "! = "<<res[i]<<endl;
  }

  return 0;
}