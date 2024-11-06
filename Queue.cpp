//#include "Queue.h"
//
//template <typename T>
//void Queue<T>::push(T value) {
//    Node* newNode = new Node(value);
//    if (empty()) {
//        frontNode = rearNode = newNode;
//    }
//    else {
//        rearNode->next = newNode;
//        rearNode = newNode;
//    }
//    currentSize++;
//}
//
//template <typename T>
//void Queue<T>::pop() {
//    if (!empty()) {
//        Node* temp = frontNode;
//        frontNode = frontNode->next;
//        delete temp;
//        currentSize--;
//        if (empty()) rearNode = nullptr;
//    }
//}
//
//template <typename T>
//T Queue<T>::front() const {
//    if (!empty()) {
//        return frontNode->data;
//    }
//    throw runtime_error("Queue is empty.");
//}
//
//template <typename T>
//int Queue<T>::size() const {
//    return currentSize;
//}
//
//template <typename T>
//bool Queue<T>::empty() const {
//    return currentSize == 0;
//}
//
//template <typename T>
//void Queue<T>::move_to_rear() {
//    if (!empty() && frontNode != rearNode) {
//        T frontValue = front();
//        pop();
//        push(frontValue);
//    }
//}
//
//template <typename T>
//void Queue<T>::display() {
//    Node* temp = frontNode;
//    while (temp != nullptr) {
//        cout << temp->data << " ";
//        temp = temp->next;
//    }
//    cout << endl;
//}
