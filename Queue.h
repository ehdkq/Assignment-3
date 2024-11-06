#ifndef QUEUE_H
#define QUEUE_H

#include <iostream>
using namespace std;

template <typename T>
class Queue {
private:
    struct Node {
        T data;
        Node* next;
        Node(T value) : data(value), next(nullptr) {}
    };

    Node* frontNode;
    Node* rearNode;
    int currentSize;

public:
    Queue() : frontNode(nullptr), rearNode(nullptr), currentSize(0) {}

    void push(T value) {
        Node* newNode = new Node(value);
        if (empty()) {
            frontNode = rearNode = newNode;
        }
        else {
            rearNode->next = newNode;
            rearNode = newNode;
        }
        currentSize++;
    }

    void pop() {
        if (!empty()) {
            Node* temp = frontNode;
            frontNode = frontNode->next;
            delete temp;
            currentSize--;
            if (empty()) rearNode = nullptr;
        }
    }

    T front() const {
        if (!empty()) {
            return frontNode->data;
        }
        throw runtime_error("Queue is empty.");
    }

    int size() const {
        return currentSize;
    }

    bool empty() const {
        return currentSize == 0;
    }

    void move_to_rear() {
        if (!empty() && frontNode != rearNode) {
            T frontValue = front();
            pop();
            push(frontValue);
        }
    }

    void display() {
        Node* temp = frontNode;
        while (temp != nullptr) {
            cout << temp->data << " ";
            temp = temp->next;
        }
        cout << endl;
    }
};

#endif
