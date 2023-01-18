#include <iostream>
#include <stdexcept>
using namespace std;

int main(int argc, char const *argv[])
{
    try
    {
        char *c = new char[6];
        c = "hello";
        free(c);
        c = NULL;
    }
    catch (exception &e)
    {
        cout << e.what() << endl;
    }

    return 0;
}