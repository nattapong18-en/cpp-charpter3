#include <iostream>

int addThree(int number) { return number + 3; }

int doubleNumber(int number) { return number * 2; }

int main() {
  int value{10};
  value = addThree(value);
  value = doubleNumber(value);

  std::cout << "Final value: " << value << '\n';

  return 0;
}
