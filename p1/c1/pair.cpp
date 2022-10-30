#include <iostream>
#include <utility>

using namespace std;

int main(int argc, char *argv[]) {
  pair<double, int> p{1.23, 5};
  cout << p.first << " " << p.second << endl;

  return 0;
}
