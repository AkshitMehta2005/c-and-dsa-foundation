// priority queue
#include <iostream>
#include <climits>
using namespace std;
class node{
public:
int data;
node*next;
node(int data){
    this->data = data;
    this->next = NULL;
}
};
class circularqueue{
private:
node*front;
node*rear;
public:
circularqueue(){
    front = NULL;
    rear = NULL;
}
bool isempty(){
    return front == NULL;
}
void enqueue(int data){
    node*temp = new node(data);
    if(isempty()){
        front = temp;
    }
    else{
        rear->next = temp;
    }
    rear = temp;
    rear->next = front; // Make the queue circular
}
int dequeue(){
     if (isempty()) {
            cout << "Queue is empty. Cannot dequeue." << std::endl;
            return -1; // You can return a sentinel value or throw an exception
       }
       int deleteData = front->data;
       node*temp = front;
       if(front==rear){
           front = NULL;
           rear = NULL;
       }
       else{
           front = front->next;
           rear->next = front;// Update rear's next to maintain circularity
       }
       delete temp;
       return deleteData;
}
 void display() {
        if (isempty()) {
            std::cout << "Queue is empty." << std::endl;
            return;
        }

        node* current = front;
        do {
            std::cout << current->data << " ";
            current = current->next;
        } while (current != front);

        std::cout << std::endl;
    }
};
int main() {
     circularqueue queue;

    queue.enqueue(1);
    queue.enqueue(2);
    queue.enqueue(3);
    queue.enqueue(4);

    std::cout << "Circular Queue: ";
    queue.display();

    std::cout << "Dequeue: " << queue.dequeue() << std::endl;
    std::cout << "Dequeue: " << queue.dequeue() << std::endl;

    std::cout << "Circular Queue after dequeuing: ";
    queue.display();
    return 0;
}
