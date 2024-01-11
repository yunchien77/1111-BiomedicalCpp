#include <iostream>
using namespace std;

void Split_Integer(int);

int main() {
  Split_Integer(123456);
  Split_Integer(7890);
  return 0;
}

void Split_Integer(int num) {
  while (num != 0) {
    cout << num % 10 << " ";
    num /= 10;
  }
  cout << endl;
}