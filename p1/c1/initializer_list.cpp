#include <initializer_list>
#include <iostream>

using namespace std;

// 初始化列表可以迭代任何指定数据类型的对象
void display(initializer_list<int> list) {
  for (auto &item : list) {
    cout << item << " ";
  }
  cout << endl;
}

int main(int argc, char *argv[]) {
  display({1, 2, 3, 4});
  return 0;
}
