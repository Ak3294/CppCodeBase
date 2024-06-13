#include <iostream>
using namespace std;

class DynamicArray {
    int *data;
    int nextIndex;
    int capacity;

public:
    DynamicArray() {
        data = new int[5];
        nextIndex = 0;
        capacity = 5;
    }

    void add(int element) {
        if (nextIndex == capacity) {
            int *newData = new int[2 * capacity];
            for (int i = 0; i < capacity; i++) {
                newData[i] = data[i];
            }
            delete[] data;
            data = newData;
            capacity = capacity * 2;
        }
        data[nextIndex] = element;
        nextIndex++;
    }

    int get(int i) {
        if (i >= 0 && i < nextIndex) {
            return data[i];
        } else {
            return -1;
        }
    }
};

int main() {
    DynamicArray a1;
    a1.add(12);
    cout << a1.get(0) << endl; // Changed: Passing index argument to get() function
    return 0;
}
