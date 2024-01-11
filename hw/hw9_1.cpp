#include <iostream>
using namespace std;

class MyArray {
public:
  MyArray();
  int operator[](int) const;
  int &operator[](int);
  int size_() const;

private:
  int data_[5];
};

ostream &operator<<(ostream &, const MyArray &);

int main() {
  MyArray a;
  a[2] = 3;
  a[3] = 5;
  a[4] = 7;
  cout << "a[5]: " << a[5] << endl    // a[5]  == a[0]
       << "a[12]: " << a[12] << endl  // a[12] == a[2]
       << "a[18]: " << a[18] << endl  // a[18] == a[3]
       << "a[29]: " << a[29] << endl; // a[29] == a[4]
  return 0;
}

ostream &operator<<(ostream &os, const MyArray &a) {
  os << "[" << a[0];
  for (int i = 1; i < a.size_(); i++) {
    os << ", " << a[i];
  }
  os << "]";
  return os;
}

MyArray::MyArray() {
  for (auto &v : data_) {
    v = 0;
  }
}

int MyArray::operator[](int i) const { return data_[i % 5]; }

int &MyArray::operator[](int i) { return data_[i % 5]; }

int MyArray::size_() const { return 5; }
