#include <iostream>
using namespace std;

class Product {
public:
  Product(int v);
  int price;
  bool operator<=(const Product &) const;
  bool operator>(const Product &) const;
};

ostream &operator<<(ostream &os, const Product &p) {
  os << p.price;
  return os;
}

int main() {
  const Product list[5] = {180, 260, 359, 190, 540};

  cout << "Cheap (price <= 199):";
  for (const auto &l : list) {
    if (l <= 199) { // call l.operator<=(199)
      cout << " " << l;
    }
  }
  cout << endl;

  cout << "Expensive:";
  for (const auto &l : list) {
    if (l > 199) {
      cout << " " << l;
    }
  }
  cout << endl;

  return 0;
}

bool Product::operator<=(const Product &x) const {
  return price <= x.price;
  /*
  bool result = (price <= x.price) ?1 :0;
  return result;
  */
}

bool Product::operator>(const Product &x) const {
  return price > x.price;
  /*
  bool result = (price > x.price) ?1 :0;
  return result;
  */
}

Product::Product(int v) { price = v; }
