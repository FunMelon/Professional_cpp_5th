#include <iostream>
#include <optional>

using namespace std;

optional<int> getData(bool giveIt) {
  if (giveIt)
    return 42;

  return std::nullopt;
}

int main (int argc, char *argv[])
{
  optional<int> d1 {getData(true)};
  optional<int> d2 {getData(false)};

  cout << d1.has_value() << endl;
  return 0;
}
