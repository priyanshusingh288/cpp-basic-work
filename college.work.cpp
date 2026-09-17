#include <iostream>

class Stack {
private:
   
    static const int MAX_SIZE = 5; 
    int arr[MAX_SIZE];
    int top;

public:
  
    Stack() : top(-1) {}

    bool isFull() const {
        return top == MAX_SIZE - 1;
    }

    bool isEmpty() const {
        return top == -1;
    }

    void push(int value) {
        if (isFull()) {
            std::cout << "[Overflow] Cannot insert " << value << ": Stack is full.\n";
            return;
        }
        
        top++;
        arr[top] = value;
        std::cout << "Pushed " << value << " (top index: " << top << ")\n";
    }

    int pop() {
        if (isEmpty()) {
            std::cout << "[Underflow] Cannot delete: Stack has no elements.\n";
            return -1; 
        }

        int removedValue = arr[top];
        top--;
        std::cout << "Popped " << removedValue << " (top index: " << top << ")\n";
        return removedValue;
    }

    int peek() const {
        if (isEmpty()) {
            std::cout << "[Notice] Stack is empty: No element to inspect.\n";
            return -1;
        }
        return arr[top];
    }

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

    s.pop();

    s.push(10);
    s.push(20);
    s.push(30);
    s.push(40);
    s.push(50);

    s.push(60);
    std::cout << "Top element: " << s.peek() << "\n";
    s.display();

    s.pop();
    s.pop();
    s.display();

    return 0;
}
