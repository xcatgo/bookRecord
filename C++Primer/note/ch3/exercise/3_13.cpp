#include <iostream>
#include <vector>
#include <string>

using std::vector;
using std::cin;
using std::cout;
using std::endl;
using std::string;

int main(int argc, char const *argv[])
{
    vector<int> v1{10};
    cout << v1.size() << endl; // 1

    vector<string> v2{10, "hi"};
    cout << v2.size() << endl; // 10

    vector<string> v3{10};
    cout << v3.size() << endl; // 10

    return 0;
}
