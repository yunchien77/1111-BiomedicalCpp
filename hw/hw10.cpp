#include <initializer_list>
#include <iostream>

using namespace std;

template <typename T, int N> class Array {
public:
  Array();
  Array(initializer_list<T>);
  T operator[](int i) const;
  T &operator[](int i);
  int Size() const;
  void Mysort();

private:
  T data[N];
};

template <typename T, int N>
ostream &operator<<(ostream &, const Array<T, N> &);

template <typename T, int N> T *begin(Array<T, N> &);

template <typename T, int N> T *end(Array<T, N> &);

int main() {
  Array<int, 5> a = {5, 4, 3, 2, 1};
  // before sort:
  cout << "Before sorting: ";
  for (int *p = begin(a); p != end(a); p++) {
    int n = *p;
    cout << n << " ";
  }
  cout << "\n After sorting: ";
  // after sort:
  a.Mysort();
  for (int *p = begin(a); p != end(a); p++) {
    int n = *p;
    cout << n << " ";
  }
}

template <typename T, int N> Array<T, N>::Array() {
  for (T &v : data) {
    v = T();
  }
}

template <typename T, int N> Array<T, N>::Array(initializer_list<T> o) {
  int i = 0;
  for (T v : o) {
    data[i] = v;
    i++;
  }
}

template <typename T, int N> T Array<T, N>::operator[](int i) const {
  return data[i];
}

template <typename T, int N> T &Array<T, N>::operator[](int i) {
  return data[i];
}

template <typename T, int N> int Array<T, N>::Size() const { return N; }

template <typename T, int N> void Array<T, N>::Mysort() {
  T temp;
  for (int i = 0; i < Size() - 1; ++i) {
    for (int j = 0; j < Size() - 1; ++j) {
      if (data[j] > data[j + 1]) {
        temp = data[j];
        data[j] = data[j + 1];
        data[j + 1] = temp;
      }
    }
  }
}

template <typename T, int N>
ostream &operator<<(ostream &os, const Array<T, N> &a) {
  for (int i = 0; i < a.Size() - 1; i++) {
    os << a[i] << " ";
  }
  os << a[a.Size() - 1];
  return os;
}

template <typename T, int N> T *begin(Array<T, N> &a) { return &a[0]; }

template <typename T, int N> T *end(Array<T, N> &a) { return &a[N]; }
