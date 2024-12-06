#include <iostream>
using namespace std;

// FIFO
//template <typename T>
//class Queue {
//private:
//    struct Node {
//        T data;
//        Node* next;
//        Node(T value) : data(value), next(nullptr) {}
//    };
//    Node* frontNode; 
//    Node* rearNode;  
//public:
//    Queue() : frontNode(nullptr), rearNode(nullptr) {}
//    ~Queue() {
//        while (frontNode) {
//            Node* temp = frontNode;
//            frontNode = frontNode->next;
//            delete temp;
//        }
//    }
//    void enqueue(const T& value) {
//        Node* newNode = new Node(value);
//        if (rearNode) {
//            rearNode->next = newNode;
//        }
//        else {
//            frontNode = newNode;
//        }
//        rearNode = newNode;
//    }
//
//    void dequeue() {
//        if (isEmpty()) {
//            cout << "Queue is empty. Cannot dequeue." << endl;
//            return;
//        }
//        Node* temp = frontNode;
//        frontNode = frontNode->next;
//        if (!frontNode) {
//            rearNode = nullptr;
//        }
//        delete temp;
//    }
//
//    T front() const {
//        if (isEmpty()) {
//            cout << "Queue is empty. No front element." << endl;
//            return T(); 
//        }
//        return frontNode->data;
//    }
//
//    bool isEmpty() const {
//        return frontNode == nullptr;
//    }
//
//    void print() const {
//        Node* current = frontNode;
//        while (current) {
//            cout << current->data << " ";
//            current = current->next;
//        }
//        cout << endl;
//    }
//};
//int main() {
//    Queue<int> queue;
//    queue.enqueue(10);
//    queue.enqueue(20);
//    queue.enqueue(30);
//
//    cout << "Queue: ";
//    queue.print();
//
//    cout << "Front element: " << queue.front() << endl;
//
//    queue.dequeue();
//    cout << "Queue after dequeue: ";
//    queue.print();
//
//    queue.dequeue();
//    queue.dequeue();
//    queue.dequeue(); 
//    return 0;
//}

// LIFO
/* 
template <typename T>
class Stack {
private:
    struct Node {
        T data;
        Node* next;
        Node(T value) : data(value), next(nullptr) {}
    };
    Node* topNode;
public:
    Stack() : topNode(nullptr) {}

    ~Stack() {
        while (topNode) {
            Node* temp = topNode;
            topNode = topNode->next;
            delete temp;
        }
    }

    void push(const T& value) {
        Node* newNode = new Node(value);
        newNode->next = topNode;
        topNode = newNode;
    }

    void pop() {
        if (isEmpty()) {
            cout << "Stack is empty. Cannot pop." << endl;
            return;
        }
        Node* temp = topNode;
        topNode = topNode->next;
        delete temp;
    }

    T top() const {
        if (isEmpty()) {
            cout << "Stack is empty. No top element." << endl;
            return T();
        }
        return topNode->data;
    }

    bool isEmpty() const {
        return topNode == nullptr;
    }

    void print() const {
        Node* current = topNode;
        while (current) {
            cout << current->data << " ";
            current = current->next;
        }
        cout << endl;
    }
};

int main() {
    Stack<int> stack;
    stack.push(10);
    stack.push(20);
    stack.push(30);

    cout << "Stack: ";
    stack.print();

    cout << "Top element: " << stack.top() << endl;

    stack.pop();
    cout << "Stack after pop: ";
    stack.print();

    stack.pop();
    stack.pop();
    stack.pop();

    return 0;
}
*/
