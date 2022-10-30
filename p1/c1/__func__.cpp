#include <iostream>

using namespace std;

int fun() {
  // __func__ 作为参数存储函数的名字
  cout << __func__ << endl;
}

int main (int argc, char *argv[])
{
  fun();
  return 0;
}
