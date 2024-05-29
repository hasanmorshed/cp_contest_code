#include <iostream>
#include <vector>
#include <algorithm>

int find_largest_element(std::vector<int> arr) {
    // Sort the array in ascending order
    std::sort(arr.begin(), arr.end());

    // Check if the largest element is the last element
    if (arr[arr.size() - 1] == arr.back()) {
        // If yes, return the second largest element
        return arr[arr.size() - 2];
    } else {
        // Otherwise, return the largest element
        return arr[arr.size() - 1];
    }
}

int main() {
    std::vector<int> arr = {10, 5, 20, 15, 25};
    int result = find_largest_element(arr);
    std::cout << "The result is: " << result << std::endl;
    return 0;
}

