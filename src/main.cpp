#include <iostream>

int multiply(int x, int y) { return x * y; }

int readNumber() {
  int number{};
  std::cout << "Enter an integer: ";
  std::cin >> number;
  return number;
}

int main() {
  int firstNumber{readNumber()};
  int secondNumber{readNumber()};
  int answer{multiply(firstNumber, secondNumber)};
  std::cout << "Answer: " << answer << '\n';
  return 0;
}
