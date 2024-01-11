#include <iostream>
using namespace std;

void Mysort(int &, int &);

int main() {
  int a = 4, b = 6;
  int c = 9, d = 3;
  Mysort(a, b);
  Mysort(c, d);
  cout << "a: " << a << endl;
  cout << "b: " << b << endl;
  cout << "c: " << c << endl;
  cout << "d: " << d << endl;
  return 0;
}

void Mysort(int &x, int &y) {
  int temp;
  if (x > y) {
    temp = x;
    x = y;
    y = temp;
  }
}