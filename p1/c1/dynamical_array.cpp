#include <iostream>
#include <utility>

using namespace std;

int main(int argc, char *argv[]) {
  // 动态数组作为是指针，sizeof不能返回大小
  int *arr{new int[5]{0, 1}};
  int *arr2{new int[]{0, 1}};
  cout << sizeof(arr) << " " << sizeof(arr2) << endl;
  // 使用new，delete来取代malloc和free，记得一个new接着一个delete
  delete[] arr;
  delete[] arr2;
  return 0;
}
