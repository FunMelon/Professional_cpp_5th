#include <iostream>
#include <stdexcept>

using namespace std;

double divideNumber(double numerator, double denominator) {
  if (denominator == 0)
    throw invalid_argument{"Denominator cannot be 0."};
  return numerator / denominator;
}

int main(int argc, char *argv[]) { 
  int denominator;
  cin >> denominator;
  try {
    divideNumber(10, denominator);
  }
  // C++ 不必捕获所有异常
  catch (const invalid_argument& exception) {
    cout << exception.what() << endl;
  }
  return 0; 
}
