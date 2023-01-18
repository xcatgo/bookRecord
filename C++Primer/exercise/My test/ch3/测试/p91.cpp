/*
 * @Author: your name
 * @Date: 2021-07-25 18:23:08
 * @LastEditTime: 2021-07-25 18:25:35
 * @LastEditors: Please set LastEditors
 * @Description: In User Settings Edit
 * @FilePath: \C++ primer\exercise\My test\ch3\p91.cpp
 */

#include <iostream>
#include <string>
#include <vector>

using namespace std;

int main() {
  vector<int> a{1, 2, 3, 4, 5, 6, 7};
  for (auto i : a) {
    cout << i;
  }

  a = {4, 5, 6};

  cout << '\n';

  for (auto i : a) {
    cout << i;
  }

  return 0;
}