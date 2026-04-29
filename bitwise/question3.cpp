// given the number example = 90 you have to find the smallest power  of the 2 ans = 64

// #include <iostream>
// using namespace std;
// int main()
// {
//   int n = 66;
//   int temp;
//   while (n > 0)
//   {
//     temp = n;
//     n = n & (n - 1);
//   }
//   cout << temp;
//   return 0;
// }


// method 2

// #include <iostream>
// using namespace std;
// int max_power(int x){
//   x = x|(x>>1);
//   x = x|(x>>2);
//   x = x|(x>>4);
//   x = x|(x>>8);
//   x = x|(x>>16);
//   return (x+1)>>1; // n+1/2 it mean
// }
// int main()
// {
//   int n = 66;
//   cout<<max_power(31);
//   return 0;
// }


// to find greater power of 2
#include <iostream>
using namespace std;

int max_power(int x) {
    x = x - 1;
    x = x | (x >> 1);
    x = x | (x >> 2);
    x = x | (x >> 4);
    x = x | (x >> 8);
    x = x | (x >> 16);
    return x + 1;
}

int main() {
    int n = 66;
    cout << max_power(n) << endl;
    return 0;
}
