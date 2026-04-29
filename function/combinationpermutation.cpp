// #include <iostream>
// using namespace std;
// int main()
// {   //combination
//    int n;
//    cout<<"Enter the number n";
//    cin>>n;
//    int r;
//    cout<<"Enter the number r";
//    cin>>r;
//     int nfact = 1;
//     for(int i = 1;i<=n;i++){ //n
//         nfact = nfact*i;
//     }

//     int rfact = 1;    // r
//     for(int i = 1;i<=r;i++){
//         rfact = rfact*i;
//     }

//     int nrfact = 1;   //nr
//     for(int i = 1;i<=n-r;i++){
//         nrfact = i*nrfact;
//     }

//     int ncr = nfact/(rfact*nrfact);
//     cout<<"the combination will be ";
//     cout<<ncr<<endl;

//     int npr = nfact/(nrfact);
//     cout<<"the permutation will be "<<npr<<endl;
//     return 0;
// }



#include <iostream>
using namespace std;

int fact(int x){
    int  f = 1;
    for(int i = 1;i<=x;i++){
       f = f*i;
    }
    return f;
}

  int combination(int n,int r){
  int ncr = fact(n)/(fact(r)*fact(n-r));
  }

  int permutation(int n,int r){
  int ncr = fact(n)/fact(n-r);
  }

int main()
{   
   int n;
   cout<<"Enter the number n";
   cin>>n;
   int r;
   cout<<"Enter the number r";
   cin>>r;
   int nfact = fact(n);
   int rfact = fact(r);
   int nrfact = fact(n-r);
   cout<<"The combination will be "<<combination(n,r)<<endl;
   cout<<"The combination will be "<<permutation(n,r);
  return 0;
}
