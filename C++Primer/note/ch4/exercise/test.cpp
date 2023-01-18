#include <iostream>
#include <string>
using std::string;

int main(int argc, char const *argv[])
{
    char *c = new char[6];
    // memcpy(c, "hello", 6);
    std::cout << &c << std::endl;
    c = "hello";
    std::cout << &"hello" << std::endl;
    std::cout << &c << std::endl;

    // char *b = c;
    string s = c;
    std::cout << s << std::endl;
    std::cout << &s << std::endl;
    std::cout << &c << std::endl;
    delete c;
    c = NULL;

    std::cout << s << std::endl;
    std::cout << &s << std::endl;
    std::cout << &c << std::endl;

    return 0;
}
