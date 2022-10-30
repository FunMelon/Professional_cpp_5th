#include <iostream>

using namespace std;

int main (int argc, char *argv[])
{
  int x {123};
  // decltype获取x的类型然后返回作为参数
  decltype(x) y {456};
  return 0;
}
