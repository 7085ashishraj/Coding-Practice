// #include <iostream>
// #include <vector>
// #include <algorithm>

// using namespace std;

// int main() {
//     vector<int> numbers = {5, 2, 8, 1, 9};

//     // Bubble Sort Example
//     for (int i = 0; i < numbers.size() - 1; ++i) {
//         for (int j = 0; j < numbers.size() - i - 1; ++j) {
//             if (numbers[j] > numbers[j + 1]) {
//                 swap(numbers[j], numbers[j + 1]);
//             }
//         }

//         // Print after each iteration
//         cout << "Iteration " << i + 1 << ": ";
//         for (int num : numbers) {
//             cout << num << " ";
//         }
//         cout << endl;
//     }

//     return 0;
// }



#include <iostream>
#include <vector>

using namespace std;

int main() {
    vector<int> arr = {5, 2, 8, 1, 6}; 

    cout << "Original array: ";
    for (int num : arr) {
        cout << num << " ";
    }
    cout << endl;

    // Bubble Sort
    for (int i = 0; i < arr.size() - 1; ++i) {
        for (int j = 0; j < arr.size() - i - 1; ++j) {
            if (arr[j] > arr[j + 1]) {
                swap(arr[j], arr[j + 1]);
            }
        }

        cout << "Iteration " << i + 1 << ": ";
        for (int num : arr) {
            cout << num << " ";
        }
        cout << endl;
    }

    cout << "Sorted array: ";
    for (int num : arr) {
        cout << num << " ";
    }
    cout << endl;

    return 0;
}