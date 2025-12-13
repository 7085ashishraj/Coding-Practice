// #include <iostream>
// using namespace std;

// int main() {
//     int size = 7;
//     int arr[] = {10, 20, 30, 40, 50, 60, 70};
//     int index = 4;
//     for (int i = index; i < size; i++) {
//         arr[i] = arr[i + 1];
//     }
//     size--; 
//     for (int i = 0; i < size; i++) {
//         cout << arr[i] << " ";
//     }
//     return 0;
// }

#include <iostream>
using namespace std;

int main() {
    int size = 3;
    int arr[] = {1, 2, 3};
    for (int i = 0; i < size; i++) {
        if (arr[i] > 0) {
            cout << arr[1] << " ";
        }
    }
    return 0;
}