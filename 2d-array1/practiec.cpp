// We have populated the solutions for the 10 easiest problems for your support.
// Click on the SUBMIT button to make a submission to this problem.



#include <iostream>
using namespace std;

int main() {
	int t;
	cin>>t;
	while(t--){
	    int fact = 1;
	    int n;
	    cin>>n;
	    for(int i = 1;i<=n;i++){
	      fact = fact*i;  
	    }
	    cout<<fact<<endl;
	}
	
	return 0;
}
