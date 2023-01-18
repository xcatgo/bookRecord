#include <iostream>
using namespace std;

int main(int argc, char const *argv[])
{
    const char *cc = "hello";
    cout << &"hello" << endl;
    printf("address of cc: %p\n", cc);

    char *c = const_cast<char *>(cc);
    printf("address of c: %p\n", c);
    cout << c << endl;
    // free((void *)c);
    c = NULL;

    return 0;
}