#include <iostream>
#include <vector>
#include <list>
#include "Queue.h"
#include "Search.h"
#include "Sort.h"

using namespace std;

int main() {
    // Q1: Testing the Queue
    Queue<int> queue;

    // a) Push 10 values into the queue
    for (int i = 1; i <= 10; ++i) {
        queue.push(i);
    }

    // b) Display all elements in the queue
    cout << "Queue elements: ";
    queue.display();

    // c) Move the front element to the rear
    cout << "After moving front to rear: ";
    queue.move_to_rear();
    queue.display();

    // Q2: Testing Recursive Linear Search for Last Occurrence
    vector<int> vec = { 1, 2, 3, 2, 4, 2, 5 };
    int target = 2;
    int index = recursiveLinearSearch(vec, target, vec.size() - 1);

    if (index != -1) {
        cout << "Last occurrence of " << target << " is at index " << index << endl;
    }
    else {
        cout << target << " not found in the vector." << endl;
    }

    // Q3: Testing Insertion Sort on a List
    list<int> list = { 5, 2, 9, 1, 5, 6 };

    cout << "Original list: ";
    for (int num : list) cout << num << " ";
    cout << endl;

    insertionSort(list);

    cout << "Sorted list: ";
    for (int num : list) cout << num << " ";
    cout << endl;

    return 0;
}
