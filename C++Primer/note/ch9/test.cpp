#include <iostream>
#include <vector>
#include <cstring>
using namespace std;

void fun(char *a)
{
    cout << sizeof(a) << endl;
    cout << strlen(a) << endl;
}

int main(int argc, char const *argv[])
{
    // vector<string> args;

    char a[] = "123456789";
    char b[8] = {'a', 'b', 'c'};
    // int c[8] = {1, 2, 3};
    // cout << a << endl;
    // cout << sizeof(a) << endl;
    // cout << strlen(a) << endl;
    *(b + 8) = '\0';
    cout << sizeof(b) << endl;
    cout << strlen(b) << endl;

    // fun(a);

    return 0;
}
