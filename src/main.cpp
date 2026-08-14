#include <iostream>
// #define ENABLE_DEBUG

int calculateArea(int width, int height) {
#ifdef ENABLE_DEBUG
  std::cerr << "calculateArea(width =" << width << " height =" << height
            << ")\n";
#endif
  return width * height;
}

int main() {
#ifdef ENABLE_DEBUG
  std::cerr << "main() called\n";
#endif
  int width{};
  std::cout << "Width: ";
  std::cin >> width;
  int height{};
  std::cout << "Height: ";
  std::cin >> height;

  std::cout << "Area: " << calculateArea(width, height) << '\n';

  return 0;
}
