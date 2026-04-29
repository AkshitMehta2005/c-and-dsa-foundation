#include<iostream>
#include<queue>
using namespace std;


void print(int arr[],int n ){
    for(int i = 0;i<n;i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
}

void heapify(int i , int arr[],int n){ // same as pop code in minheap
     while (true) {
            int left = 2 * i;
            int right = 2 * i + 1;

            if (left >= n) break; // No children, stop bubbling down

            // Check if there's only a left child
            if (right >= n) {
                if (arr[i] > arr[left]) {
                    swap(arr[i], arr[left]);
                    i = left;
                }
                break;
            }

            // Both children exist, compare them
            if (arr[left] < arr[right]) {
                if (arr[i] > arr[left]) {
                    swap(arr[i], arr[left]);
                    i = left;
                } else {
                    break;
                }
            } else {
                if (arr[i] > arr[right]) {
                    swap(arr[i], arr[right]);
                    i = right;
                } else {
                    break;
                }
            }
        }
}

int main(){
    int arr[] = {-1,10,11,2,4,3,8};
    int n = sizeof(arr)/sizeof(arr[0]);

    print(arr,n);

    for(int i = n/2;i>=1;i--){
        heapify(i,arr,n);
    }

    print(arr,n);


}
