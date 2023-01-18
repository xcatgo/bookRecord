#include <iostream>
#include <vector>

using namespace std;

// const string测试
int test01()
{
    const std::string s1 = "hello";

    for (auto &c : s1)
    {
        std::cout << c << std::endl;
    }

    return 0;
}

// vector初始化
int test02()
{
    vector<string> v1(10);

    cout << v1.size() << endl;

    return 0;
}

int main(int argc, char const *argv[])
{
    std::string s1 = "    He  llo";

    std::cout << s1 << std::endl;

    test02();

    return 0;
}
