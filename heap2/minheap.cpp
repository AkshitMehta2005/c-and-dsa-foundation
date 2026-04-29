#include <iostream>
using namespace std;

// MinHeap class
class MINHEAP {
public:
    int arr[50];  // Fixed size array for simplicity
    int idx;

    // Constructor
    MINHEAP() {
        idx = 1;  // Start indexing from 1
    }

    // Return the top element (minimum element in the heap)
    int top() {
        if (idx == 1) {
            cout << "Heap is empty!" << endl;
            return -1; // Indicates an empty heap
        }
        return arr[1];
    }

    // Push a new element into the heap
    void push(int x) {
        if (idx == 50) {
            cout << "Heap overflow! Cannot insert more elements. Maximum size is 50." << endl;
            return;
        }

        arr[idx] = x; // Insert the element at the end
        int i = idx;  // Index of the inserted element
        idx++;

        // Adjust the heap (bubble up)
        while (i > 1) {
            int parent = i / 2;
            if (arr[parent] > arr[i]) {
                swap(arr[parent], arr[i]);
                i = parent;  // Move up to the parent
            } else {
                break;
            }
        }
    }

    // Pop the minimum element (root) from the heap
    void pop() {
        if (idx == 1) {
            cout << "Heap underflow! No elements to pop." << endl;
            return;
        }

        // Replace the root with the last element
        arr[1] = arr[idx - 1];
        idx--;

        int i = 1;
        while (true) {
            int left = 2 * i;
            int right = 2 * i + 1;

            if (left >= idx) break; // No children, stop bubbling down

            // Check if there's only a left child
            if (right >= idx) {
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

    // Return the current size of the heap
    int size() {
        return idx - 1; // Exclude the placeholder
    }

    // Display the heap elements
    void display() {
        if (idx == 1) {
            cout << "Heap is empty!" << endl;
            return;
        }
        for (int i = 1; i <= idx - 1; i++) {
            cout << arr[i] << " ";
        }
        cout << endl;
    }
};

int main() {
    MINHEAP pq;

    pq.push(10);
    pq.push(20);
    pq.push(50);
    pq.push(30);
    pq.push(60);

    cout << "Heap elements: ";
    pq.display();

    pq.pop();
    cout << "Heap after popping: ";
    pq.display();

    return 0;
}
