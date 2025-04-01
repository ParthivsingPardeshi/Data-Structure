#include <iostream>
using namespace std;

class Deque {
    int q[5], front, rear, size;

public:
    Deque()  {
        front= -1;
        rear= -1;
        size= 5;
    }

    bool isFull() {
        return (front == 0 && rear == size - 1) || (front == rear + 1);
    }

    bool isEmpty() {
        return front == -1;
    }

    void insertFront(int value) {
        if (isFull()) {
            cout << "Deque is full\n";
            return;
        }
        if (isEmpty()) {
            front = rear = 0;
        } else if (front == 0) {
            front = size - 1;
        } else {
            front--;
        }
        q[front] = value;
    }

    void insertRear(int value) {
        if (isFull()) {
            cout << "Deque is full\n";
            return;
        }
        if (isEmpty()) {
            front = rear = 0;
        } else if (rear == size - 1) {
            rear = 0;
        } else {
            rear++;
        }
        q[rear] = value;
    }

    void deleteFront() {
        if (isEmpty()) {
            cout << "Deque is empty\n";
            return;
        }
        cout << "Deleted: " << q[front] << endl;
        if (front == rear) {
            front = rear = -1;
        } else if (front == size - 1) {
            front = 0;
        } else {
            front++;
        }
    }

    void deleteRear() {
        if (isEmpty()) {
            cout << "Deque is empty\n";
            return;
        }
        cout << "Deleted: " << q[rear] << endl;
        if (front == rear) {
            front = rear = -1;
        } else if (rear == 0) {
            rear = size - 1;
        } else {
            rear--;
        }
    }

    void display() {
        if (isEmpty()) {
            cout << "Deque is empty\n";
            return;
        }
        int i = front;
        while (true) {
            cout << q[i] << " ";
            if (i == rear)
                break;
            i = (i + 1) % size;
        }
        cout << endl;
    }
};

int main() {
    Deque d;
    int choice, value;
    do {
        cout << "\n1: Insert Front\n2: Insert Rear\n3: Delete Front\n4: Delete Rear\n5: Display\n6: Exit\nEnter choice: ";
        cin >> choice;
        switch (choice) {
        case 1:
            cout << "Enter value: ";
            cin >> value;
            d.insertFront(value);
            break;
        case 2:
            cout << "Enter value: ";
            cin >> value;
            d.insertRear(value);
            break;
        case 3:
            d.deleteFront();
            break;
        case 4:
            d.deleteRear();
            break;
        case 5:
            d.display();
            break;
        }
    } while (choice != 6);
    return 0;
}