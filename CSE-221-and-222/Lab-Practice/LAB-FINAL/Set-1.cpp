#include <iostream>
using namespace std;

#define MAX 5

// ===== STACK =====
int stack[MAX], top = -1;

void push(int item) {
    if (top == MAX - 1) {
         cout << "Stack FULL!" << endl; return;
         }
    stack[++top] = item;
    cout << "Pushed: " << item << endl;
}

int pop() {
    if (top == -1) { 
        cout << "Stack EMPTY!" << endl; return -1; 
    }
    return stack[top--];
}

void showStack() {
    if (top == -1) { 
        cout << "Stack: [EMPTY]" << endl; return;
     }
    cout << "Stack: ";
    for (int i = top; i >= 0; i--) cout << stack[i] << " ";
    cout << endl;
}

// ===== QUEUE =====
int q[MAX], front = 0, rear = -1, cnt = 0;

void enqueue(int item) {
    if (cnt == MAX) { 
        cout << "Queue FULL!" << endl; return; 
    }
    rear = (rear + 1) % MAX;
    q[rear] = item;
    cnt++;
    cout << "Queued: " << item << endl;
}

int dequeue() {
    if (cnt == 0) { 
        cout << "Queue EMPTY!" << endl; return -1; 
    }
    int item = q[front];
    front = (front + 1) % MAX;
    cnt--;
    return item;
}

void showQueue() {
    if (cnt == 0) { 
        cout << "Queue: [EMPTY]" << endl; return; 
    }
    cout << "Queue: ";
    int i = front;
    for (int k = 0; k < cnt; k++) { 
        cout << q[i] << " "; i = (i + 1) % MAX;
     }
    cout << endl;
}

void status() {
    showStack();
    showQueue();
    cout << "-------------------" << endl;
}

int main() {
    int n, item;

    cout << ".........Warehouse Management System....." << endl;

    // Step 1: Items arriving at warehouse
    cout << "Items arriving? ";
    cin >> n;

    for (int i = 0; i < n; i++) {
        cout << "Item ID: ";
        cin >> item;
        push(item);
        status();
    }

    // Step 2: Process items (pop from stack, enqueue to shipping)
    cout << "Items to process? ";
    cin >> n;

    for (int i = 0; i < n; i++) {
        item = pop();
        if (item != -1) {
            enqueue(item);
        }
        status();
    }

    // Step 3: Ship items in FIFO order
    cout << "\nItems to ship? ";
    cin >> n;

    for (int i = 0; i < n; i++) {
        item = dequeue();
        if (item != -1) {
            cout << "Shipped: " << item << endl;
        }
        status();
    }

    return 0;
}
