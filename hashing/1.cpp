#include<iostream>
using namespace std;

int main(){
    int arr[] = {1, 2, 1, 3, 2}; // The input array
    int n = 5; // Size of the input array
    
    int hash[13] = {0}; // Initialize the hash array to zero

    // Build the hash table
    for(int i = 0; i < n; i++){
        hash[arr[i]]++; // Increment the value at index arr[i]
    }

    
    int number = 2;
    cout<<hash[number];
}
