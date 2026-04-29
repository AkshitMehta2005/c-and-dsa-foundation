#include<iostream>
#include<algorithm> // for reverse
using namespace std;

int Wait(string s) {
    int n = s.size();
    int j = 1;
    int sum = 0;
    for(int i = n-1;i>=0;i--){
        if(s[i]=='1')sum +=j;
        j = j*2;
    }
    return sum;
}

int main() {
    string s = "10001";
    cout << Wait(s);
}
