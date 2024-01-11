#include <iostream>
using namespace std;

template <typename T> void MySort(T &, T &);

class Product {
  friend ostream &operator<<(ostream &, Product);

public:
  Product(int v);
  bool operator>(Product &);

private:
  int value;
};

int main() {
  int a1 = 2, b1 = 4;
  double a2 = 8, b2 = 5;
  Product a3 = 3, b3 = 5;
  Product a4 = 7, b4 = 4;

  MySort(a1, b1);
  MySort(a2, b2);
  MySort(a3, b3);
  MySort(a4, b4);

  cout << "(a1, b1) : (" << a1 << ", " << b1 << ")" << endl
       << "(a2, b2) : (" << a2 << ", " << b2 << ")" << endl
       << "(a3, b3) : (" << a3 << ", " << b3 << ")" << endl
       << "(a4, b4) : (" << a4 << ", " << b4 << ")" << endl;
}

Product::Product(int v) { value = v; }

ostream &operator<<(ostream &os, Product g) { return os << g.value; }

bool Product::operator>(Product &g) { return (value > g.value); }

template <typename T> void MySort(T &x, T &y) {
  if (x > y) {
    T temp = x;
    x = y;
    y = temp;
  }
}