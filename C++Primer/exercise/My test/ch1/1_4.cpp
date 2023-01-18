/* 打印两个数的积 */
#include <iostream>

int main() {
  std::cout << "请输入两个数字： " << std::endl;

  int a = 0, b = 0;
  std::cin >> a >> b;
  std::cout << "数字a：" << a << "和数字b：" << b << "的乘积为： " << a * b
            << std::endl;

  return 0;
}