#include <iostream>
#include <vector>
#include <string>

int main(int argc, char const *argv[])
{
    std::vector<std::string> v1(10);
    std::cout << "v1.size() = " << v1.size() << std::endl;
    std::cout << "v1.capacity() = " << v1.capacity() << std::endl;
    std::cout << "v1[1] = " << v1[1] << std::endl;
    std::vector<std::string> v2("hello");
    std::vector<std::string> v3{10};

    return 0;
}
