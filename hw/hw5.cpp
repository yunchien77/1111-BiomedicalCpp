// HW5
#include <cmath>
#include <iostream>

using namespace std;

class Point {
public:
  double x;
  double y;
  Point Normalize() {
    double sqrt_result = sqrt(x * x + y * y);
    x = (x / sqrt_result);
    y = (y / sqrt_result);
    return {x, y};
  }
  int Length() {
    return sqrt(x * x + y * y); // implicit conversion
  }
};

Point Normalize(Point &a) {
  double sqrt_result = sqrt(a.x * a.x + a.y * a.y);
  a.x = a.x / sqrt_result;
  a.y = a.y / sqrt_result;
  return {a.x, a.y};
}

int main() {
  Point p1 = {5, 7}, p2 = {6, 4};
  Normalize(p1); // call general function
  cout << "(Normalized)p1: (" << p1.x << ", " << p1.y << "), " << p1.Length()
       << endl;   // call member function(method)
  p2.Normalize(); // call member function(method)
  cout << "(Normalized)p2: (" << p2.x << ", " << p2.y << "), " << p2.Length()
       << endl; // call member function(method)
  return 0;
}
