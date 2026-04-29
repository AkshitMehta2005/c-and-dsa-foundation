// circluar queue
#include<iostream>
using namespace std;

#define n 5
int queue[n];
int front = -1;
int rear = -1;

void enqueue(int x) {
    if (((rear + 1) % n) == front) {
        cout << "Queue is full";
    }
    else if (front == -1 && rear == -1) {
        front = rear = 0;
        queue[rear] = x;
    }
    else {
        rear = (rear + 1) % n;
        queue[rear] = x;
    }
}

void dequeue() {
    if (front == -1 && rear == -1) {
        cout << "Queue is empty";
    }
    else if (front == rear) {
        cout << queue[front];
        front = rear = -1;
    }
    else {
        cout << queue[front] << " ";
        front = (front + 1) % n;
    }
}

void display() {
    int i = front;
    if (front == -1 && rear == -1) {
        cout << "Queue is empty";
    }
    else {
        cout << "Queue is: ";
        while (i != rear) {
            cout << queue[i] << " ";
            i = (i + 1) % n;
        }
        cout << queue[i]; // Display the last element
    }
}

int main() {
    enqueue(1);
    enqueue(2);
    enqueue(3);
    enqueue(4);
    enqueue(5);
    display();
    cout<<endl;
    dequeue();
    cout<<endl;
    display();
    enqueue(8);
    cout<<endl;
    display();
    return 0;
}
