#include <array>
#include <iostream>

using namespace std;

int main(int argc, char *argv[]) {
  int carr[3] {1, 2};
  for (auto &num : carr)
    cout << num << " ";
  cout << endl;
  cout << sizeof(carr) << endl;

  array<int, 3> arr{1, 2};
  for (auto &num : arr)
    cout << num << " ";
  cout << endl;
  cout << arr.size() << endl;
  return 0;
}
