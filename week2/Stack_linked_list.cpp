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

struct linkedStack {
private:
    Node* top;
public:
    linkedStack() : top(nullptr) {}

    bool isempty() {
        return top == nullptr;
    }

    void push(const int a) {
        Node* tmp = new Node(a);
        tmp -> next = top;
        top = tmp;
    } //Time: O(1), Memory: O(1)

    int pop() {
        if (isempty()){
            cout << "Stack is empty" << endl;
            return -1;
        }
        const Node* tmp = top;
        top = top -> next;
        const int val = tmp -> data;
        delete tmp;
        return val;
    } //Time: O(1), Memory: O(1)

    int peek() {
        if (isempty()){
            cout << "Stack is empty" << endl;
            return -1;
        }
        return top -> data;
    } //Time: O(1), Memory: O(1)
};

int main() {
    linkedStack stack;
    stack.push(1);
    stack.push(2);
    stack.push(3);
    stack.push(4);
    stack.pop();
    cout << stack.pop() << endl;
    cout << stack.peek() << endl;
    stack.pop();
    cout << stack.pop() << endl;
    cout << stack.pop() << endl;
    return 0;
}