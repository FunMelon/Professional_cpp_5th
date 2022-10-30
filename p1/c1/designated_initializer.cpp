#include <iostream>

using namespace std;

struct Employee {
  char firstInitial;
  char lastInitial;
  int employeeNumber;
  int salary;

  // c++结构体也有方法，默认为公有
  void show() {
    cout << firstInitial << " " << lastInitial << " " << employeeNumber << " "
         << salary << endl;
  }
};

int main(int argc, char *argv[]) {
  // 普通的通用初始化
  Employee e{'a', 'b', 10, 100};
  e.show();
  // 缺省的通用初始化
  Employee e1{'a', 'b'};
  e1.show();
  // 设计初始化可以指明声明初始化的变量，可以使初始化更人性
  Employee e2{.employeeNumber = 10000, .salary = 10000};
  e2.show();

  return 0;
}
