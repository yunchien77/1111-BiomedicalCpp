#include <stdio.h>

class EndStream {};

class OutStream {
public:
  OutStream &operator<<(const char *);
  OutStream &operator<<(int);
  OutStream &operator<<(double);
  void operator<<(EndStream &);
};

int main() {
  OutStream myCout;
  EndStream myEndl;
  myCout << "1 + 1 = " << 1 + 1 << myEndl;
  myCout << "1 / 1. = " << 1 / 1. << myEndl;
  return 0;
}

OutStream &OutStream::operator<<(const char *str) {
  printf("%s", str);
  return (*this);
}

OutStream &OutStream::operator<<(int i) {
  printf("%d", i);
  return (*this);
}

OutStream &OutStream::operator<<(double i) {
  printf("%lf", i);
  return (*this);
}

void OutStream::operator<<(EndStream &es) { printf("\n"); }
