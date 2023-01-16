#include <iostream>

int main() {
  setlocale(LC_ALL, "Russian");

  int one;
  float two;
  std::cout << "¬ведите два числа (через пробел): ";
  std::cin >> one >> two;

  std::cout << (one) << " + " << (two) << " = " << (one + two) << std::endl;
  std::cout << (one) << " - " << (two) << " = " << (one - two) << std::endl;
  std::cout << (one) << " * " << (two) << " = " << (one * two) << std::endl;
  std::cout << (one) << " / " << (two) << " = " << (one / two) << std::endl;
  std::cout << (one) << " & " << (two) << " = " << (one & (int)two) << std::endl;
  std::cout << (one) << " | " << (two) << " = " << (one | (int)two) << std::endl;
  std::cout << (one) << " ^ " << (two) << " = " << (one ^ (int)two);

  return 0;
}
