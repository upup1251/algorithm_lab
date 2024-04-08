#include "matrix_product.h"
#include <iostream>
#include <vector>
using namespace std;

int main() {
  vector<int> a{5, 10, 3, 12, 5, 50, 6};
  Matrix_product m = Matrix_product(a);
  m.Matrix_prodect_order();
  m.print(0, a.size() - 2);
  return 0;
}
