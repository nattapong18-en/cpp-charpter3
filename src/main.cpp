#include <iostream>

int calculateArea(int width, int height) {
  std::cerr << "calculateArea(width=" << width << ", height=" << height
            << ")\n";

  return width * height;
}

int main() {
  std::cout << "Width: ";
  int width{};
  std::cin >> width;

  std::cout << "Height: ";
  int height{};
  std::cin >> height;
  std::cerr << "main::width" << width << '\n';
  std::cerr << "main::height" << height << '\n';
  int area{calculateArea(width, height)};
  std::cout << "Area: " << area << '\n';

  return 0;
}
