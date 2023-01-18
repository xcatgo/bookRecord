#include <iostream>

int main() {
  int currVal = 0, val = 0;
  // 读取第一个数,并确保确实有数据可以处理
  if (std::cin >> currVal) {
    int cnt = 1; // 保存正在处理的当前值的个数
    while (std ::cin >> val) {
      if (val == currVal)
        ++cnt;
      else {
        std::cout << currVal << " occurs " << cnt << " times" << std::endl;
        currVal = val;
        cnt = 1;
      }
    }
    // 打印最后一个数
    std::cout << currVal << " occurs " << cnt << " times" << std::endl;
  }

  return 0;
}