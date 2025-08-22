// You are using GCC

#include <iostream>
using namespace std;

// Delete from end
void delete_from_end(int arr[], int n) {
    arr[n - 1] = 0;
}

// Delete from beginning
void delete_from_begin(int arr[], int n) {
    for (int i = 1; i <= n - 1; i++) {
        arr[i - 1] = arr[i];
    }
    arr[n - 1] = 0;
}

// Delete at position
void delete_from_position(int arr[], int n, int index) {
    for (int i = index; i < n - 1; i++) {
        arr[i] = arr[i + 1];
    }
    arr[n - 1] = 0;
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

    delete_from_end(arr, n);
    n--;
    cout << "After deleting from end: ";
    traverse(arr, n);

    delete_from_begin(arr, n);
    n--;
    cout << "After deleting from beginning: ";
    traverse(arr, n);

    int index3 = 2; // example index
    delete_from_position(arr, n, index3);
    n--;
    cout << "After deleting from position " << index3 << ": ";
    traverse(arr, n);

    return 0;
}
