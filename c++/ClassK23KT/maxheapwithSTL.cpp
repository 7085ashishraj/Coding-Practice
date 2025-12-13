#include <iostream>
#include <vector>
#include <algorithm>

int main() {
    std::vector<int> nums = {3, 1, 4, 1, 5, 9, 2, 6};

    // Convert the vector into a max heap
    std::make_heap(nums.begin(), nums.end());

    // Print the top element (max value)
    std::cout << "Top element: " << nums.front() << std::endl;

    // Add a new element to the heap
    nums.push_back(7);
    std::push_heap(nums.begin(), nums.end());

    std::cout << "Top element after adding 7: " << nums.front() << std::endl;

    // Remove the top element from the heap
    std::pop_heap(nums.begin(), nums.end());
    nums.pop_back();

    std::cout << "Top element after removing top: " << nums.front() << std::endl;

    return 0;
}