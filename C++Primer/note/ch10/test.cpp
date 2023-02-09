#include <iostream>
#include <algorithm>
#include <vector>
#include <numeric>

using namespace std;

int main(int argc, char const *argv[])
{
    vector<int> a = {1, 2, 2, 3, 3, 3, 3, 4, 8, 1, 1, 0, 9, 8, 3, 2};

    auto b = unique(a.begin(), a.end());
    for(auto i = a.begin(); i != a.end(); ++i)
    cout << *i;

    return 0;
}
