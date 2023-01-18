#include <iostream>

int main() {
  int n = 50;
  int sum = 50;
  while (n != 100) {
    n++;
    sum += n;
  }

  std::cout << sum << std::endl;

  return 0;
}