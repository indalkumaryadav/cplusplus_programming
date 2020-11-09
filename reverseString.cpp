#include <iostream>
using namespace std;

int main()
{
    string str = "indal";

    int n = str.length() - 1;

    for (int i = n; i >= 0; i--)
    {
        cout << str[i];
    }

    return 0;
}