/*
 * @Author: your name
 * @Date: 2021-07-25 17:19:53
 * @LastEditTime: 2021-07-25 17:23:21
 * @LastEditors: Please set LastEditors
 * @Description: In User Settings Edit
 * @FilePath: \C++ primer\exercise\My test\ch3\练习\3_11.cpp
 */

#include <iostream>
#include <typeinfo>

using namespace std;

int main(){

  const string a("aaa");
  
  const char b = 'a';
  for (auto &c : a){
  
    cout << typeid(b).name() << endl;
  }

  return 0;
}