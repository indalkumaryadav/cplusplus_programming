#include <iostream>
#include <vector>
using namespace std;
int main()
{
    string str = "Indal";
    string c = str + str;

    for (int i = 0; i < int(str.size()); i++)
    {
        for (int j = 0; j < int(str.size()); j++)
        {
            cout << c[i + j];
        }
        cout << endl;
    }

    return 0;
}