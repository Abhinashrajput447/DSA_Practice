#include<iostream>
using namespace std;

class Vector {
public: 
  int size;
  int capacity;
  int* arr;

  Vector() {
    size = 0;
    capacity = 1;
    arr = new int[1];
  }

  void push(int ele) {
    if(size == capacity) {
      capacity *= 2;
      int* arr2 = new int[capacity];

      for(int i=0; i<size; i++) {
        arr2[i] = arr[i];
      }
      arr = arr2;
    }
    arr[size++] = ele;  // post increment 
    
  }

  void print() {  // printing the array
    for(int i=0; i<size; i++) {
      cout << arr[i] << " ";
    }
    cout << endl;
  }

  // element getting
  int get(int idx) { 
    if(size == 0) {
      cout << "Array is empty\n";
      return -1;
    }
    if(idx >= size || idx < 0) {
      cout << "Invalud Index\n";
      return -1;
    }
    return arr[idx];
  }

  // Removing element

  void remove() {
    if(size == 0) {
      cout << "Array is empty\n";
    }
    size--;
  }

};

int main() {
  Vector v;

  //size & capacity printing
  cout << v.size << " " << v.capacity << endl;
  v.push(10);
  v.print();

  cout << v.size << " " << v.capacity << endl;
  v.push(20);
  v.print();

  cout << v.size << " " << v.capacity << endl;
  v.push(30);
  v.print();

  cout << v.size << " " << v.capacity << endl;
  v.push(40);
  v.print();
  
  cout << v.size << " " << v.capacity << endl;
  v.push(50);
  v.print();

  // cout << v.get(4);  // get element by index
  
  v.remove();  // removing element from end
  cout << v.size << " " << v.capacity << endl;
  v.print();
  

  return 0;
}
