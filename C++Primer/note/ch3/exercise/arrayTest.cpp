#include <iostream>

int odd[] = {1, 3, 5, 7, 9};
int even[] = {0, 2, 4, 6, 8};
auto func(int i) -> int (*)[5];
// 定义函数
auto func(int i) -> int (*)[5]
{
    return (i % 2) ? &odd : &even;
}

int size()
{
    return 10;
}

int main(int argc, char const *argv[])
{
    // const char a[6] = "Daniel";
    // char a1[] = "hello";
    // char a2[] = "world";
    // a2 = a1;

    // int a[size()];

    int(*p)[5] = func(2);
    for (int i = 0; i < 5; i++)
    {
        std::cout << (*p)[i] << std::endl;
        // std::cout << p[0][i] << std::endl;
    }

    return 0;
}
