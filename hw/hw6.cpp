// HW6
#include <iostream>
using namespace std;

class Point {
public:
  int x;
  int y;
  Point operator+(Point);
  Point operator-(Point);
};

int main() {
  Point p1 = {1, 2}, p2 = {3, 4};
  Point p3 = p1 + p2 - p1; //== (p1.operator+(p2)).operator-(p1);  //operator
                           //overloading(運算子多載)
  cout << "p3 : (" << p3.x << ", " << p3.y << ")" << endl;
  return 0;
}

Point Point::operator+(Point p) { return {x + p.x, y + p.y}; }

Point Point::operator-(Point p) { return {x - p.x, y - p.y}; }
