#include <iostream>
using namespace std;

#define N 5
int queue[N];
int front = -1;
int rear = -1;

void enqueue(int data) {
    
    if ((rear + 1) % N == front) {
        cout << "Overflow! Circular Queue is full." << endl;
    } 
    else if (front == -1 && rear == -1) {
        front = rear = 0;
        queue[rear] = data;
    } 
    else {
        rear = (rear + 1) % N;
        queue[rear] = data;
    }
}

void dequeue() {
    if (front == -1 && rear == -1) {
        cout << "Underflow! Circular Queue is empty." << endl;
    } 
    else if (front == rear) {
        cout << "Deleted Value: " << queue[front] << endl;
        front = rear = -1;
    } 
    else {
        cout << "Deleted Value: " << queue[front] << endl;
        front = (front + 1) % N;
    }
}

void display() {
    if (front == -1 && rear == -1) {
        cout << "Queue is empty." << endl;
    } else {
        cout << "Queue elements: ";
        int i = front;
        while (i != rear) {
            cout << queue[i] << " ";
            i = (i + 1) % N;
        }
        cout << queue[rear] << endl;
    }
}

int main() {
    enqueue(10);
    enqueue(20);
    enqueue(30);
    enqueue(40);
    enqueue(50);
   
    enqueue(60); 
    
    display(); 
    
    dequeue(); // Delete= 10 
    dequeue(); // Delete= 20 
    
    // Advantage of Circular Queue: New data can be added now as space is free at the front.
    enqueue(60);
    enqueue(70);
    
    display(); 
    
    return 0;
}
