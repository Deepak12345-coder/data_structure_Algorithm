#include <iostream>
using namespace std;

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

    cout << "Traversing array: ";
    traverse(arr, n);

    return 0;
}
