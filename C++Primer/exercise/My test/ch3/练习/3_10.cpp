/*
 * @Author: your name
 * @Date: 2021-07-25 17:24:03
 * @LastEditTime: 2021-07-25 17:33:45
 * @LastEditors: Please set LastEditors
 * @Description: In User Settings Edit
 * @FilePath: \C++ primer\exercise\My test\ch3\练习\3_10.cpp
 */

#include <iostream>
// #include <string>

using namespace std;

int main() {
  string a("hell,world,my,name,is,xlq");

  if (!a.empty()) {
    for (decltype(a.size()) n = 0; n < a.size(); n++) {
      if (ispunct(a[n]))
        a.erase(n,1);
    }
  }

  cout << a << endl;

  return 0;
}
