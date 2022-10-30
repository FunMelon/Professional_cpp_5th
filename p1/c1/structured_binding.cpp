#include <iostream>
#include <utility>

using namespace std;

// 结构绑定，类似于Java中的自动拆包
int main(int argc, char *argv[]) {
  pair<double, int> p = {1.2, 3};
  auto [n, m]{p};
  cout << n << " " << m << endl;

  struct Point {
    double x, y, z;
  };
  Point pt{-1, -14, -9};
  auto [x, y, z]{pt};
  cout << x << " " << y << " " << z << endl;
  return 0;
}
