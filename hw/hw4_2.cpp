#include <iostream>
using namespace std;

void MySwap(int &a, int &b);
void MySwap(double &a, double &b);
void MySwap(float &a, float &b);

int main() {
  int a = 8, b = 9;
  double c = 5.4, d = 7.6;
  float e = 0.1, f = 3.2;
  MySwap(a, b);
  MySwap(c, d);
  MySwap(e, f);
  cout << "a：" << a << endl
       << "b：" << b << endl
       << "c：" << c << endl
       << "d：" << d << endl
       << "e：" << e << endl
       << "f：" << f << endl;
  return 0;
}

void MySwap(int &a, int &b) {
  int temp = b;
  b = a;
  a = temp;
}

void MySwap(double &a, double &b) {
  double temp = b;
  b = a;
  a = temp;
}

void MySwap(float &a, float &b) {
  float temp = b;
  b = a;
  a = temp;
}