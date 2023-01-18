/*
 * @Author: your name
 * @Date: 2021-07-25 16:32:05
 * @LastEditTime: 2021-07-25 17:15:45
 * @LastEditors: Please set LastEditors
 * @Description: In User Settings Edit
 * @FilePath: \C++ primer\exercise\My test\ch3\P80.cpp
 */
#include <iostream>
#include <typeinfo>
#include <cctype>

using namespace std;

int main(){

  string a("   ");
  string b("abbaaaaaaaaaaa");

  auto d = "aaa";
  auto e = "ccc";

  cout << d + a << endl;

  // bool c = isdigit(a[2]);
  bool c = a.empty();
  a[2] = 'a';

  cout << c << endl;
  cout << a << endl;
  cout << a[2] << endl;
  cout << typeid(d).name() << endl;

  return 0;
}