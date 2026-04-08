#include <iostream>
using namespace std;

#define N 5
int queue[N];
int front = -1;
int rear = -1;


void enqueue(int data) {
    if (rear == N - 1) {
        cout << "Overflow! Queue is full." << endl;
    } 
    else if (front == -1 && rear == -1) {
        front = rear = 0;
        queue[rear] = data;
    } 
    else {
        rear++;
        queue[rear] = data;
    }
}

void dequeue() {
    if (front == -1 && rear == -1) {
        cout << "Underflow! Queue is empty." << endl;
    } 
    else if (front == rear) {
        cout << "Deleted Value: " << queue[front] << endl;
        front = rear = -1;
    } 
    else {
        cout << "Deleted Value: " << queue[front] << endl;
        front++;
    }
}

void display() {
    if (front == -1 && rear == -1) {
        cout << "Queue is empty." << endl;
    } else {
        cout << "Queue elements: ";
        for (int i = front; i <= rear; i++) {
            cout << queue[i] << " ";
        }
        cout << endl;
    }
}


void peek() {
    if (front == -1 && rear == -1) {
        cout << "Queue is empty." << endl;
    } else {
        cout << "Front element is: " << queue[front] << endl;
    }
}

bool isEmpty() {
    return (front == -1 && rear == -1);
}

bool isFull() {
    return (rear == N - 1);
}

int main() {
  
    enqueue(7);
    enqueue(12);
    enqueue(8);
    
    display(); // Output: 7 12 8
    
    dequeue(); // Delete= 7
    
    display(); // Output: 12 8
    
    peek();    // Output : 12
    
    return 0;
}
