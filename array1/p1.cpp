#include <iostream>
using namespace std;

int main() {
	int n;// nop of test case
	cin>>n;
	int arr[n]; //
	for(int i = 0;i<n;i++){
	    cin>>arr[i];
	}
	for(int i = 0;i<n;i++){
    if(arr[i]>0 and arr[i]<11){cout<<"Lower Double"<<endl;
    }
    else if(arr[i]>10 and arr[i]<16){cout<<"Lower Single"<<endl;
      
    }
    else if(arr[i]>15 and arr[i]<26){cout<<"Upper Double"<<endl;
      
    }
    else if(arr[i]>25 and arr[i]<31){cout<<"Upper single"<<endl;
    }
    
	}
	
	return 0;
}
