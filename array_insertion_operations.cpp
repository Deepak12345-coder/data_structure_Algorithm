// You are using GCC

#include <iostream>
using namespace std;

// Insert at end of array
void insert_at_end(int arr[], int n, int element) {
    arr[n] = element;
}

// Insert at beginning
void insert_at_begin(int arr[], int n, int element1) {
    for (int i = n - 1; i >= 0; i--) {
        arr[i + 1] = arr[i];
    }
    arr[0] = element1;
}

// Insert at particular position or index
void insert_at_position(int arr[], int n, int element3, int index) {
    for (int i = n - 1; i >= index; i--) {
        arr[i + 1] = arr[i];
    }
    arr[index] = element3;
}

// Traversing of array
void traverse(int arr[], int n) {
    for (int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;
}

int main() {
    int arr[10] = {1, 2, 3, 4, 5};
    int n = 5;

    cout << "Initial Array: ";
    traverse(arr, n);

    int element = 8;
    insert_at_end(arr, n, element);
    n++;
    cout << "After inserting at end: ";
    traverse(arr, n);

    int element1 = 9;
    insert_at_begin(arr, n, element1);
    n++;
    cout << "After inserting at beginning: ";
    traverse(arr, n);

    int index1 = 3;
    int element3 = 56;
    insert_at_position(arr, n, element3, index1);
    n++;
    cout << "After inserting at position " << index1 << ": ";
    traverse(arr, n);

    return 0;
}
