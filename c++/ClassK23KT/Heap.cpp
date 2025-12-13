#include <iostream>
using namespace std;

void maxheapify(int a[], int i, int heapSize) {
  int left = 2 * i+1;
  int right = 2 * i + 2;
  int largest = i;
  if (left <= heapSize && a[left] > a[largest]) {
    largest = left;
  }
  if (right <= heapSize && a[right] > a[largest]) {
    largest = right;
  }
  if (largest != i) {
    swap(a[i], a[largest]);
    maxheapify(a, largest, heapSize);
  }
}

void buildmaxheap(int a[], int heapSize) {
  for (int i = heapSize / 2 -1; i >= 0; i--) {
    maxheapify(a, i, heapSize);
  }
}

void heapsort(int a[], int heapSize) {
  buildmaxheap(a, heapSize);
  for (int i = heapSize; i > 1; i--) {
    swap(a[1], a[i]);
    maxheapify(a, 1, i - 1);
  }
}

void print(int a[], int heapSize) { 
  for (int i = 0; i < heapSize; i++) {
    cout << a[i] << " ";
  }
  cout << endl;
}

int main() {
  int a[] = {15, 5, 20, 1, 17, 10, 30};
  int heapSize = sizeof(a) / sizeof(a[0])-1; 

  if (heapSize > 0) { 
    cout << "Original array: ";
    print(a, heapSize);
    heapsort(a, heapSize);
    cout << "After sorting the array is: ";
    print(a, heapSize);
  } else {
    cout << "The array is empty." << endl;
  }

  return 0;
}