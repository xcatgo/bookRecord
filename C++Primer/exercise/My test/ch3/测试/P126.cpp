/*
 * @Author: your name
 * @Date: 2021-08-08 21:50:45
 * @LastEditTime: 2021-08-08 21:53:08
 * @LastEditors: Please set LastEditors
 * @Description: 测试逻辑和关系运算符
 * @FilePath: \C++ primer\exercise\My test\ch3\测试\P126.cpp
 */

#include <iostream>

using std::cout;
using std::cin;
using std::endl;

int main(int argc, char *argv[]){

  int a = 45;

  cout << !a << endl;

  // !a = 2;  // 报错, 逻辑和关系运算符的运算对象和求职结果只能为右值

  return 0;
}