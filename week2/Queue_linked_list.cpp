#include <iostream>
using namespace std;

struct Node{
    int data;
    struct Node* next;
    Node(int val) {
        data = val;
        next = nullptr;
    }
};

struct linkedQueue {
private:
    int size;
    Node* front;
    Node* rear;
public:
    linkedQueue() {
        size = 0;
        front = rear = nullptr;
    }

    void enqueue(int val) {
        Node* node = new Node(val);
        if (rear == nullptr) {
            front = rear = node;
        } else {
            rear->next = node;
            rear = rear->next;
        }
        size++;
    } //Time: O(1), Memory: O(1)

    int dequeue() {
        if (front == nullptr) {
            cout << "Queue is empty" << endl;
            return -1;
        }

        const Node* tmp = front;
        const int val = tmp -> data;
        front = front->next;
        if (front == nullptr) {
            rear = nullptr;
        }
        delete tmp;
        size--;
        return val;
    } //Time: O(1), Memory: O(1)

    int getfront() {
        if (front == nullptr) {
            cout << "Queue is empty" << endl;
            return -1;
        }
        return front->data;
    } //Time: O(1), Memory: O(1)

    int getsize() {
        return size;
    }
};

int main() {
    linkedQueue Queue;
    Queue.enqueue(10);
    Queue.enqueue(20);
    cout << Queue.dequeue() << endl;
    Queue.enqueue(30);
    cout << Queue.getfront() << endl;
    cout << Queue.getsize() << endl;

    return 0;
}