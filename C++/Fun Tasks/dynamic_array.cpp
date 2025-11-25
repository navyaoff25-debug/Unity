#include<iostream>
using namespace std;

class dynamic {
public:
  int* data;
  int size;
  int capacity;
};

dynamic() {
  size = 0;
  capacity = 2;
  data = new int[capacity];
}

~dynamic() {
    cout << "Destructed" << endl;

    delete[] data;
}

if size == capacity {
    dynamic (const dynamic& other){
      size = other.size;
      capacity = other.capacity;
      data = new int[capacity];
    }

    dynamic (dynamic&& other) noexcept {
        data = other.other;
        size = other.size;
        capacity = other.capacity;

        other.data = nullptr;
        other.size = 0;
        other.capacity = 0;
    }


    dynamic (const dynamic& other){
        size = others.size;
        capacity = others.capacity;
        data = new int[capacity];
    }
    
      others.data = nullptr;
     
      dynamic.capacity ++;

      push_back(0);

      size ++;
    }
  

  void pop_back() {
    if (size > 0) {
        size --;
    }
}


int main() {
    dynamic arr1;
    dynamic arr2;
    arr1 == arr2;
}


