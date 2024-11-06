#ifndef SEARCH_H
#define SEARCH_H

#include <vector>
using namespace std;

template <typename T>
int recursiveLinearSearch(const vector<T>& vec, T target, int index) {
    if (index < 0) return -1; // Base case: target not found
    if (vec[index] == target) return index; // Found the target
    return recursiveLinearSearch(vec, target, index - 1); // Recursive call
}

#endif
