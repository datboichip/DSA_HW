#include <iostream>
#include <list>

using namespace std;

struct stack_list {
private:
    list<int> elements;

public:
    void push(int value) {
        elements.push_back(value);
    } // Time: O(1), Memory: O(1)

    int pop() {
        if (isempty()) {
            cout << "Stack is empty" << endl;
            return -1;
        }

        const int value = elements.back();
        elements.pop_back();
        return value;
    } // Time: O(1), Memory: O(1)

    int peek() const {
        if (isempty()) {
            cout << "Stack is empty" << endl;
            return -1;
        }

        return elements.back();
    } // Time: O(1), Memory: O(1)

    bool isempty() const {
        return elements.empty();
    }

    int size() {
        int size = elements.size();
        return size;
    }
};

int main() {
    stack_list stack;

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
