#include <iostream>

using namespace std;

int main(int argc, char const *argv[]) {
  // if，增强for循环，switch都开始支持初始化声明
  if (int i = 0; i < 1) {
    cout << "i is less than 1" << endl;
  }
  int num[5]{1, 2, 3, 4, 5};
  for (int i = 0; auto &n : num) {
    cout << n << " ";
  }
  cout << endl;

  // 枚举类
  enum class Mode { Default, Custom, Standard };
  Mode mode{Mode::Custom};
  int value{0};
  switch (mode) {
    using enum Mode;
  case Custom:
    value = 45;
  case Standard:
  case Default:
    break;
  }
  cout << value << endl;
  return 0;
}
