#include <iostream>
#include <string>

using namespace std;

#define MAX 5

// Circular Queue
struct Vehicle {
    int id;
    int arrivalTime;
};

Vehicle q[MAX];
int front = 0, rear = -1, cnt = 0;

void enqueue(int id, int time) {
    if (cnt == MAX) { 
        cout << "Queue is full" << endl; 
        return; 
    }
    rear = (rear + 1) % MAX;
    q[rear].id = id;
    q[rear].arrivalTime = time;
    cnt++;
    cout << "Added vehicle " << id << endl;
}

Vehicle dequeue() {
    Vehicle v = {-1, -1};
    if (cnt == 0) { 
        cout << "Queue is empty" << endl; 
        return v; 
    }
    v = q[front];
    front = (front + 1) % MAX;
    cnt--;
    return v;
}

void showQueue() {
    if (cnt == 0) { 
        cout << "Queue: empty" << endl; 
        return; 
    }
    cout << "Queue: ";
    int i = front;
    for (int k = 0; k < cnt; k++) {
        cout << q[i].id << " "; 
        i = (i + 1) % MAX;
    }
    cout << endl;
}

int main() {
    int n, id, time;
    string dirs[] = {"North", "South", "East", "West"};

    cout << "Traffic System\n" << endl;

    cout << "How many vehicles? ";
    cin >> n;

    if(n > MAX) {
        n = MAX;
    }

    for (int i = 0; i < n; i++) {
        cout << "Enter ID and Time: ";
        cin >> id >> time;
        enqueue(id, time);
        showQueue();
        cout << endl;
    }

    cout << "Processing..." << endl;
    int dir = 0;

    while (cnt > 0) {
        cout << "Side: " << dirs[dir] << endl;
        Vehicle v = dequeue();
        if (v.id != -1) {
            cout << "Vehicle " << v.id << " goes" << endl;
        }
        showQueue();
        cout << endl;
        dir = (dir + 1) % 4; 
    }

    cout << "Done" << endl;
    return 0;
}
