#include <iostream>

using namespace std;

int nodiscard() { return 42; }

// 标记未nodiscard的函数返回值不可被抛弃
[[nodiscard]] int discard() { return 42; }

// 标记为此的参数可能未被使用
void used([[maybe_unused]] int x, int y) { int i = 0; }

// 可能在函数内部退出程序
[[noreturn]] void dead() { exit(1); }

// 标记该方法已经被废弃
[[deprecated("Unsafe method, please use xyz")]] void depfunc() { int i = 0; }

int main(int argc, char *argv[]) {
  nodiscard();
  discard();
  used(10, 1);
  depfunc();
  int x = 10;
  if (x > 1) [[likely]] {
    cout << "y" << endl;
  } else [[unlikely]] {
    cout << "n" << endl;
  }
  return 0;
}
