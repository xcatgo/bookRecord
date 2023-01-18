/*
 * @Author: your name
 * @Date: 2021-07-18 15:40:23
 * @LastEditTime: 2021-07-18 15:46:16
 * @LastEditors: Please set LastEditors
 * @Description: In User Settings Edit
 * @FilePath: \C++ primer\exercise\My test\ch2\P61.cpp
 */

#include <iostream>

typedef char* pstring;

int main() {
  char a = 'a';

  const char b = 'b';

  char c = 'c';

  const pstring cstr1 = &a;  // 指向 char的常量指针

  const char* cstr2 = 0;

  // cstr1 = &c;

  a = 'h';

  std::cout << *cstr1 << std::endl;

  return 0;
}
