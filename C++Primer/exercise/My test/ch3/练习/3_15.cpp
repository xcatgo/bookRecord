/*
 * @Author: your name
 * @Date: 2021-07-25 18:09:28
 * @LastEditTime: 2021-07-25 18:20:36
 * @LastEditors: Please set LastEditors
 * @Description: In User Settings Edit
 * @FilePath: \C++ primer\exercise\My test\ch3\练习\3_15.cpp
 */
#include <iostream>
#include <string>
#include <vector>

using namespace std;

int main() {
  string word;
  vector<string> str;

  while (cin >> word && word != "\n") {
    str.push_back(word);
  }

  cout << str[1] << endl;

  for (auto s : str)
    cout << s << endl;

  return 0;
}