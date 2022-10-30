#include <cstddef>
#include <iostream>
#include <vector>

using namespace std;

// C语言风格的
void separateOddsAndEvens(const int arr[], size_t size, int **odds,
                          size_t *numOdds, int **evens, size_t *numEvens) {
  *numOdds = *numEvens = 0;
  for (size_t i = 0; i < size; ++i) {
    if (arr[i] % 2)
      ++(*numOdds);
    else
      ++(*numEvens);
  }

  *odds = new int[*numOdds];
  *evens = new int[*numOdds];

  size_t oddsPos = 0, evensPos = 0;
  for (size_t i = 0; i < size; ++i) {
    if (arr[i] % 2)
      (*odds)[oddsPos++] = arr[i];
    else
      (*evens)[evensPos++] = arr[i];
  }
}

// C++的，采用通用初始化和引用传递
void separateOddsAndEvens(const int arr[], size_t size, int *&odds,
                          size_t &numOdds, int *&evens, size_t &numEvens) {
  numOdds = numEvens = 0;
  for (size_t i{0}; i < size; ++i) {
    if (arr[i] % 2)
      ++numOdds;
    else
      ++numEvens;
  }

  odds = new int[numOdds];
  evens = new int[numEvens];

  size_t oddsPos = 0, evensPos = 0;
  for (size_t i{0}; i < size; ++i) {
    if (arr[i] % 2)
      odds[oddsPos++] = arr[i];
    else
      evens[evensPos++] = arr[i];
  }
}

// C++, 使用vector版本
void separateOddsAndEvens(const vector<int> &arr, vector<int> &odds,
                          vector<int> &evens) {
  for (const int &item : arr) {
    if (item % 2)
      odds.push_back(item);
    else
      evens.push_back(item);
  }
}

// 使用结构体优化
struct OddsAndEvens {
  vector<int> odds, evens;
};
OddsAndEvens separateOddsAndEvens(const vector<int> &arr) {
  vector<int> odds, evens;
  for (const int &item : arr) {
    if (item % 2)
      odds.push_back(item);
    else
      evens.push_back(item);
  }
  return OddsAndEvens{.odds = odds, .evens = evens};
}

int main(int argc, char *argv[]) {
  int nums[]{1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
  int *oddNums{nullptr}; // 指针不要悬空
  int *evenNums{nullptr};
  size_t numOdds{0}, numEvens{0};

  auto disply = [](int *nums, size_t n) {
    for (int i = 0; i < n; ++i)
      cout << nums[i] << " ";
    cout << endl;
  };
  separateOddsAndEvens(nums, 10, &oddNums, &numOdds, &evenNums, &numEvens);
  disply(nums, 10);
  disply(oddNums, numOdds);
  disply(evenNums, numEvens);

  delete[] oddNums, oddNums = nullptr;
  delete[] evenNums, evenNums = nullptr;

  separateOddsAndEvens(nums, 10, oddNums, numOdds, evenNums, numEvens);
  disply(oddNums, numOdds);
  disply(evenNums, numEvens);

  delete[] oddNums, oddNums = nullptr;
  delete[] evenNums, evenNums = nullptr;

  vector<int> vecUnSplit{1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
  auto OddsAndEvens{separateOddsAndEvens(vecUnSplit)};

  return 0;
}
