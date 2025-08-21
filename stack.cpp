#include <iostream>
using namespace std;

#define MAX 5  // maximum size of stack

class Stack {
    int arr[MAX];
    int top;

public:
    Stack() { top = -1; }

    // Push element into stack
    void push(int x) {
        if (top == MAX - 1) {
            cout << "Stack Overflow! Cannot push " << x << endl;
        } else {
            arr[++top] = x;
            cout << x << " pushed into stack\n";
        }
    }

    // Pop element from stack
    void pop() {
        if (top == -1) {
            cout << "Stack Underflow! Nothing to pop\n";
        } else {
            cout << arr[top--] << " popped from stack\n";
        }
    }

    // Peek top element
    void peek() {
        if (top == -1) {
            cout << "Stack is empty\n";
        } else {
            cout << "Top element is: " << arr[top] << endl;
        }
    }

    // Display stack
    void display() {
        if (top == -1) {
            cout << "Stack is empty\n";
        } else {
            cout << "Stack elements: ";
            for (int i = top; i >= 0; i--) {
                cout << arr[i] << " ";
            }
            cout << endl;
        }
    }
};

int main() {
    Stack s;
    s.push(10);
    s.push(20);
    s.push(30);
    s.display();

    s.pop();
    s.peek();
    s.display();

    return 0;
}
