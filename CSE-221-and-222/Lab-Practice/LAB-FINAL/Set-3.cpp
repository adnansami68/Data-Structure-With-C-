#include <iostream>
using namespace std;

#define MAX 5

// Stack
int stk[MAX], top = -1;

void pushPatient(int id) {
    if (top == MAX - 1) { 
        cout << "Stack full" << endl; 
        return; 
    }
    stk[++top] = id;
    cout << "Added critical " << id << endl;
}

void treatCritical() {
    if (top == -1) { 
        cout << "No critical patients" << endl; 
        return; 
    }
    cout << "Treating critical: " << stk[top--] << endl;
}

void showStack() {
    if (top == -1) { 
        cout << "Critical: empty" << endl; 
        return; 
    }
    cout << "Critical: ";
    for (int i = top; i >= 0; i--) cout << stk[i] << " ";
    cout << endl;
}

// Queue
int q[MAX], front = 0, rear = -1, cnt = 0;

void enqueuePatient(int id) {
    if (cnt == MAX) { 
        cout << "Queue full" << endl; 
        return; 
    }
    rear = (rear + 1) % MAX;
    q[rear] = id;
    cnt++;
    cout << "Added normal " << id << endl;
}

void treatNonCritical() {
    if (cnt == 0) { 
        cout << "No normal patients" << endl; 
        return; 
    }
    int id = q[front];
    front = (front + 1) % MAX;
    cnt--;
    cout << "Treating normal: " << id << endl;
}

void showQueue() {
    if (cnt == 0) { 
        cout << "Normal: empty" << endl; 
        return; 
    }
    cout << "Normal: ";
    int i = front;
    for (int k = 0; k < cnt; k++) { 
        cout << q[i] << " "; 
        i = (i + 1) % MAX; 
    }
    cout << endl;
}

void status() {
    showStack();
    showQueue();
    cout << endl;
}

int main() {
    int choice, id;

    cout << "Hospital System\n" << endl;

    while (true) {
        cout << "1. Add critical" << endl;
        cout << "2. Add normal" << endl;
        cout << "3. Treat critical" << endl;
        cout << "4. Treat normal" << endl;
        cout << "5. Show list" << endl;
        cout << "6. Exit" << endl;
        cout << "Choice: ";
        cin >> choice;
        cout << endl;

        switch (choice) {
            case 1:
                cout << "ID: ";
                cin >> id;
                pushPatient(id);
                status();
                break;
            case 2:
                cout << "ID: ";
                cin >> id;
                enqueuePatient(id);
                status();
                break;
            case 3:
                treatCritical();
                status();
                break;
            case 4:
                treatNonCritical();
                status();
                break;
            case 5:
                status();
                break;
            case 6:
                return 0; 
            default:
                cout << "Invalid" << endl << endl;
        }
    }

    return 0;
}
