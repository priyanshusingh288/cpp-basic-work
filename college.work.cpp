#include <iostream>

class Stack {
private:
    // Scoped compile-time constant for array capacity
    static const int MAX_SIZE = 5; 
    int arr[MAX_SIZE];
    int top;

public:
    // Constructor: Initialize stack to empty state
    Stack() : top(-1) {}

    // Check if the stack has reached maximum capacity
    bool isFull() const {
        return top == MAX_SIZE - 1;
    }

    // Check if the stack has no elements
    bool isEmpty() const {
        return top == -1;
    }

    // Workflow: Check if full -> push element
    void push(int value) {
        if (isFull()) {
            std::cout << "[Overflow] Cannot insert " << value << ": Stack is full.\n";
            return;
        }
        
        top++;
        arr[top] = value;
        std::cout << "Pushed " << value << " (top index: " << top << ")\n";
    }

    // Workflow: Check if empty -> pop element
    int pop() {
        if (isEmpty()) {
            std::cout << "[Underflow] Cannot delete: Stack has no elements.\n";
            return -1; // Sentinel value indicating error
        }

        int removedValue = arr[top];
        top--;
        std::cout << "Popped " << removedValue << " (top index: " << top << ")\n";
        return removedValue;
    }

    // Look at the topmost element without removing it
    int peek() const {
        if (isEmpty()) {
            std::cout << "[Notice] Stack is empty: No element to inspect.\n";
            return -1;
        }
        return arr[top];
    }

    // Display all current elements in the stack
    void display() const {
        if (isEmpty()) {
            std::cout << "Stack is empty.\n";
            return;
        }

        std::cout << "Current Stack (Top to Bottom): ";
        for (int i = top; i >= 0; i--) {
            std::cout << arr[i] << " ";
        }
        std::cout << "\n";
    }
};

int main() {
    Stack s;

    // 1. Underflow check on deletion
    s.pop();

    // 2. Insertion workflow
    s.push(10);
    s.push(20);
    s.push(30);
    s.push(40);
    s.push(50);

    // 3. Overflow check on insertion
    s.push(60);

    // 4. View state
    std::cout << "Top element: " << s.peek() << "\n";
    s.display();

    // 5. Deletions
    s.pop();
    s.pop();
    s.display();

    return 0;
}