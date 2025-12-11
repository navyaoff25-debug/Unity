#include <iostream>
using namespace std;

class DynamicArray {
public:
    int* data;
    int size;
    int capacity;

    // Constructor
    DynamicArray() {
        size = 0;
        capacity = 2;
        data = new int[capacity];
    }

    // Destructor
    ~DynamicArray() {
        cout << "Destructed" << endl;
        delete[] data;
    }

    // Copy constructor
    DynamicArray(const DynamicArray& other) {
        size = other.size;
        capacity = other.capacity;

        data = new int[capacity];
        for (int i = 0; i < size; i++) {
            data[i] = other.data[i];
        }
    }

    // Move constructor
    DynamicArray(DynamicArray&& other) noexcept {
        data = other.data;
        size = other.size;
        capacity = other.capacity;

        other.data = nullptr;
        other.size = 0;
        other.capacity = 0;
    }

    // Add element
    void push_back(int value) {
        if (size == capacity) {
            // Expand
            capacity *= 2;
            int* newData = new int[capacity];

            for (int i = 0; i < size; i++)
                newData[i] = data[i];

            delete[] data;
            data = newData;
        }

        data[size] = value;
        size++;
    }

    // Remove last element
    void pop_back() {
        if (size > 0) {
            size--;
        }
    }

    // Print array
    void print() {
        cout << "Array: ";
        for (int i = 0; i < size; i++)
            cout << data[i] << " ";
        cout << endl;
    }
};

int main() {
    DynamicArray arr;

    arr.push_back(10);
    arr.push_back(20);
    arr.push_back(30);

    arr.print();  // 10 20 30

    DynamicArray copyArr = arr;  // calls copy constructor
    copyArr.print();

    DynamicArray movedArr = std::move(arr); // move constructor
    movedArr.print();

    return 0;
}
