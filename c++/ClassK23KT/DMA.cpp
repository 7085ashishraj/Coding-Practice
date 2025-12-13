#include <iostream>
#include <cstring>

using namespace std;

class StringArray {
private:
    char** arr;
    int size;

public:
    // Constructor
    StringArray(int s) {
        size = s;
        arr = new char*[size];     // new keyword allocating the memory
        for (int i = 0; i < size; i++) {
            arr[i] = nullptr; // Initialize pointers to nullptr
        }
    }

    // Destructor
    ~StringArray() {
        for (int i = 0; i < size; i++) {
            if (arr[i] != nullptr) {
                delete[] arr[i]; // Delete individual strings
            }
        }
        delete[] arr; // Delete the array of pointers
    }

    // Function to set a string at a given index
    void setString(int index, const char* str) {
        if (index >= 0 && index < size) {
            if (arr[index] != nullptr) {
                delete[] arr[index]; // Delete existing string if any
            }
            arr[index] = new char[strlen(str) + 1]; // Allocate memory for the new string
            strcpy(arr[index], str); // Copy the string
        } else {
            cout << "Invalid index!" << endl;
        }
    }

    // Function to get a string at a given index
    char* getString(int index) const {
        if (index >= 0 && index < size) {
            return arr[index];
        } else {
            return nullptr;
        }
    }

    // Function to print all strings in the array
    void print() const {
        for (int i = 0; i < size; i++) {
            if (arr[i] != nullptr) {
                cout << arr[i] << endl;
            } else {
                cout << "NULL" << endl; // Display "NULL" for empty strings
            }
        }
    }
};

int main() {
    int n;
    cout << "Enter the size of the string array: ";
    cin >> n;

    StringArray strArr(n);

    // Set strings in the array
    strArr.setString(0, "Hello");
    strArr.setString(1, "World");
    strArr.setString(2, "!");

    // Print the strings
    cout << "\nStrings in the array:" << endl;
    strArr.print();

    return 0;
}