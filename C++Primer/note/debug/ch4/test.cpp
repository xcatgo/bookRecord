#include <iostream>
#include <string>
using std::string;

int main(int argc, char const *argv[])
{
    int i = 1, j = 1;
    double slope = 1.0 / 3.0;
    std::cout << "slope = " << slope << std::endl;
    std::cout << "i :" << static_cast<void *>(&i) << std::endl;
    std::cout << "j :" << static_cast<void *>(&j) << std::endl;

    string a = "hello";
    string b = a;
    
    std::cout << "a :" << static_cast<void *>(&a) << std::endl;
    std::cout << "b :" << static_cast<void *>(&b) << std::endl;

    char *c = new char[6];
    memcpy(c, "hello", 6);
    std::cout << "a:" << sizeof(&a) << std::endl;
    // c = "hello";
    std::cout << &"hello" << std::endl;
    printf("c: %p\n", c);
    std::cout << static_cast<void *>(c) << std::endl;

    // char *b = c;
    string s = c;
    printf("s: %p\n", &s);
    std::cout << s << std::endl;
    std::cout << &s << std::endl;
    std::cout << &c << std::endl;
    delete c;
    c = NULL;

    std::cout << s << std::endl;
    std::cout << &s << std::endl;
    std::cout << static_cast<void *>(c) << std::endl;

    return 0;
}
