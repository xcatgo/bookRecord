#include <iostream>

int main() {
  // currVal 是正在统计的数， 将读入的新值存入val
  int currVal = 0, val = 0;
  // 读入第一个数，并确保确实有数据可以处理
  if (std::cin >> currVal) {
    int cnt = 1;
    while (std::cin >> val) {
      if (val == currVal)
        ++cnt;
      else {
        std::cout << currVal << " occurs " << cnt << " times " << std::endl;
        currVal = val;
        cnt = 1;
      }
    }
    std::cout << currVal << " occurs " << cnt << " times" << std::endl;
  }

  return 0;
}