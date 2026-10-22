#include <iostream>
#include <list>
using namespace std;

struct Queue_list {
private:
    list<int> elements;

public:
    void enqueue(int value) {
        elements.push_back(value);
    } // Time: O(1), Memory: O(1)

    int dequeue() {
        if (isempty()) {
            cout << "Queue is empty" << endl;
            return -1;
        }

        const int value = elements.front();
        elements.pop_front();
        return value;
    } // Time: O(1), Memory: O(1)

    int getfront() const {
        if (isempty()) {
            cout << "Queue is empty" << endl;
            return -1;
        }

        return elements.front();
    } // Time: O(1), Memory: O(1)

    bool isempty() const {
        return elements.empty();
    }

    int getsize() const {
        int size = elements.size();
        return size;
    }
};

int main() {
    Queue_list Queue;
    Queue.enqueue(10);
    Queue.enqueue(20);
    cout << Queue.dequeue() << endl;
    Queue.enqueue(30);
    cout << Queue.getfront() << endl;
    cout << Queue.getsize() << endl;

    return 0;
}