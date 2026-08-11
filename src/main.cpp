#include <iostream>

int calculateArea(int width, int height) {
  std::cerr << "calculateArea() called\n";
  return width * height;
}

int main() {
  std::cerr << "main() called\n";

  int area{calculateArea(4, 3)};
  std::cout << "Area: " << area << '\n';

  return 0;
}
