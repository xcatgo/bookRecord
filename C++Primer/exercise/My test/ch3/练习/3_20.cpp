/*
 * @Author: your name
 * @Date: 2021-07-25 18:44:05
 * @LastEditTime: 2021-07-25 23:24:52
 * @LastEditors: Please set LastEditors
 * @Description: In User Settings Edit
 * @FilePath: \C++ primer\exercise\My test\ch3\练习\3_20.cpp
 */

#include <iostream>
#include <string>
#include <vector>

using std::cin;
using std::cout;
using std::endl;
using std::string;
using std::vector;

int main() {
  vector<int> nums;
  int num;

  // 从键盘获取数字
  while (cin >> num)
    nums.push_back(num);

  for (auto i : nums)
    cout << i << " ";

  cout << endl;

  auto len{nums.size()};

  if (len == 0) {
    cout << "异常: 无值输入!" << endl;

    return -1;
  }

  // 相邻的两个值相加
  for (auto n{0}; n + 1 < len - 1; n += 2) {
    cout << nums[n] + nums[n + 1] << " ";

    // 设置每行输出五个数字
    if ((n + 2) % 10 == 0)
      cout << endl;
  }

  if (len % 2 != 0)
    cout << nums[len - 1] << " ";

  cout << endl;

  // 首尾两个值相加
  for (auto n{0}; n < len / 2; n++) {
    cout << nums[n] + nums[len - 1 - n] << " ";

    // 设置每行输出五个数字
    if ((n + 1) % 5 == 0)
      cout << endl;
  }

  if (len % 2 != 0)
    cout << nums[len / 2];

  cout << endl;

  return 0;
}