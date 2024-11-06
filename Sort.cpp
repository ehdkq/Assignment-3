#include "Sort.h"

void insertionSort(list<int>& list) {
    for (auto it = next(list.begin()); it != list.end(); ++it) {
        auto current = *it;
        auto prevIt = prev(it);

        // Move elements of the sorted part of the list to find the insertion point
        while (it != list.begin() && *prevIt > current) {
            *it = *prevIt;
            it = prevIt;
            if (prevIt != list.begin()) prevIt--;
        }
        *it = current;
    }
}
