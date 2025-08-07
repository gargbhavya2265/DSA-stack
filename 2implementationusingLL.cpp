#include<iostream>
using namespace std;

class Node {
public:
    int data;
    Node* next;

    Node(int val) {
        data = val;
        next = NULL;
    }
};

class Stack {
public:
    Node* top;
    int size;

    Stack() {
        top = NULL;
        size = 0;
    }


    void push(int value) {
        Node* temp = new Node(value);
        temp->next = top;
        top = temp;
        size++;
    }

    void pop() {
        if (top == NULL) {
            cout << "Stack Underflow\n";
            return;
        }
        Node* temp = top;
        top = top->next;
        delete temp;
        size--;
    }

    int peek() {
        if (top == NULL) {
            cout << "Stack is empty\n";
            return -1;
        }
        return top->data;
    }

    bool isEmpty() {
        return top == NULL;
    }

    int getSize() {
        return size;
    }
};

int main() {
    Stack st;

    st.push(10);
    st.push(20);
    st.push(30);

    cout << "Top element: " << st.peek() << endl;
    st.pop();
    cout << "Top after pop: " << st.peek() << endl; 
    cout << "Size: " << st.getSize() << endl; 

    st.pop();
    st.pop();
    st.pop();

    return 0;
}
