#include <iostream>

void swap(int &a, int &b) {
  if (a > b) {
    a = a + b;
    b = a - b;
    a = a - b;
  }
}

int main() {
  int a = 0, b = 0;

  std::cout << "请输入两个数字：" << std::endl;
  std::cin >> a >> b;

  swap(a, b);

  do
  {
    std::cout << a << " ";
  } while (a++ != b);
  
  
}