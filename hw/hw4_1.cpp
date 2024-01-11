#include <iostream>
using namespace std;
// 函式多載
void MyPrint(int);
void MyPrint(float);
void MyPrint(double);
void MyPrint(char);
void MyPrint(const char *);
// void MyPrint(auto); 只適用C++14以上版本

int main() {
  MyPrint(55);
  MyPrint('\n');
  MyPrint(6.8f);
  MyPrint('\n');
  MyPrint(2.8);
  MyPrint('\n');
  MyPrint("Goodbye");
  return 0;
}
void MyPrint(int x) { cout << x; }
void MyPrint(float x) { cout << x; }
void MyPrint(double x) { cout << x; }
void MyPrint(char x) { cout << x; }
void MyPrint(const char *x) { cout << x; }

/*
void MyPrint(auto x){
    cout << x;
}
*/
