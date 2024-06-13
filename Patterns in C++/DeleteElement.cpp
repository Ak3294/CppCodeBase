#include <iostream>
using namespace std;

// Function to delete a specific number from the array
void deleteNumberAndRearrange(int arr[], int &size, int number) {
    int j = 0;
    // Loop through the array
    for (int i = 0; i < size; i++) {
        // If the current element is not the number to be deleted, move it to the 'j'th position
        if (arr[i] != number) {
            arr[j++] = arr[i];
        }
    }
    // Fill the remaining positions with zeros
    for (int i = j; i < size; i++) {
        arr[i] = 0;
    }
}

int main() {
    // Example usage
    int arr[] = {1, 2, 3, 4, 2, 5, 2, 6};
    int size = sizeof(arr) / sizeof(arr[0]);
    int number = 2;

    cout << "Original array: ";
    for (int i = 0; i < size; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;

    // Delete the specific number and rearrange the array
    deleteNumberAndRearrange(arr, size, number);

    cout << "Modified array: ";
    for (int i = 0; i < size; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;

    return 0;
}
