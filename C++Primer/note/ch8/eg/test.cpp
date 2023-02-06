#include <iostream>
#include <fstream>
#include <sstream>
#include <string>
#include <deque>

using namespace std;

int main(int argc, char const *argv[])
{
    string s = "a b c d e f";
    cout << s << endl;

    ostringstream is(s);
    string a;
    ofstream o("test.txt");
    deque<string> d;

    // is >> a;
    // cerr << is << endl;

    o << "a b c d e f";

    cout << a << endl;
    cout << a.length() << endl;

    return 0;
}
