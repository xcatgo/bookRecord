#include<iostream>
// /*
// /* */
// */  expected unqualified-id before '/' token

int main(){
  std::cout << "Hello World!" << std::endl;
  std::cout << "/*";
  // std::cout << /* "*/" */;
  // std::cout << /*"*/; // 在；前需要插入表达式
}