#include<iostream>
#include<vector>

int main(int argc, char const *argv[])
{
    int a[10];
    for(int i = 0; i < 10; i++)
    {
        a[i] = i;
    }

    std::vector<int> v1(10);
    for(int i = 0; i < 10; i++)
    {
        v1[i] = i;
    }

    return 0;
}
