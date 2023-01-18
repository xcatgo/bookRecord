/*
 * @Author: your name
 * @Date: 2021-07-26 20:58:06
 * @LastEditTime: 2021-07-26 21:02:12
 * @LastEditors: Please set LastEditors
 * @Description: In User Settings Edit
 * @FilePath: \C++ primer\exercise\My test\ch3\练习\3_23.cpp
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
  vector<int> iv{1, 2, 3, 4, 5, 6, 7, 8, 9, 10};

  for (auto it = iv.begin(); it != iv.end(); ++it)
    *it *= 2;
  // cout << *it * 2 << endl;

  for (auto it = iv.begin(); it != iv.end(); ++it)
    cout << *it << endl;

  return 0;
}