/*
 * @Author: your name
 * @Date: 2021-07-26 20:48:03
 * @LastEditTime: 2021-07-26 20:56:45
 * @LastEditors: Please set LastEditors
 * @Description: In User Settings Edit
 * @FilePath: \C++ primer\exercise\My test\ch3\P98.cpp
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
  vector<int>::iterator iit;
  vector<string> iv{"hello", "", "world"};

  for (auto it = iv.cbegin(); it != iv.cend() && !it->empty(); ++it)
    cout << *it << endl;

  return 0;
}
