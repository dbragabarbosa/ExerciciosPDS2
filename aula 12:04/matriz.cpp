// Como fazer matriz em C++

#include <iostream>
#include <string>

using namespace std;

int main()
{
    vector< vector<int>> t;
    t.resize(10);
    t[0].resize(1);
    t[1].resize(2);
    ...
    t[9].resize(10);


    return 0;
}