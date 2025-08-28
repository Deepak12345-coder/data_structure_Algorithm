#include<iostream>
using namespace std;

int main()
{
    int n;  // Number of elements in first array
    cout << "Enter the value of n: ";
    cin >> n;

    int arr1[n];
    cout << "Enter the elements of first array:" << endl;
    for(int i = 0; i < n; i++) {
        cin >> arr1[i];
    }

    cout << "First array: ";
    for(int i = 0; i < n; i++) {
        cout << arr1[i] << " ";
    }
    cout << endl;

    int m;  // Number of elements in second array
    cout << "Enter the value of m: ";
    cin >> m;

    int arr2[m];
    cout << "Enter the elements of second array:" << endl;
    for(int i = 0; i < m; i++) {
        cin >> arr2[i];
    }

    cout << "Second array: ";
    for(int i = 0; i < m; i++) {
        cout << arr2[i] << " ";
    }
    cout << endl;

    // Merging arrays into arr3
    int arr3[n + m];
    int k = 0;

    // Copy arr1 into arr3
    for(int i = 0; i < n; i++) {
        arr3[k++] = arr1[i];
    }

    // Copy arr2 into arr3
    for(int j = 0; j < m; j++) {
        arr3[k++] = arr2[j];
    }

    // Display merged array
    cout << "Merged array (concatenated): ";
    for(int c = 0; c < n + m; c++) {
        cout << arr3[c] << " ";
    }
    cout << endl;

    return 0;
}
