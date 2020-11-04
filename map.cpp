#include <iostream>
#include <map>

using namespace std;

int main()
{
    map<string, int> Map;

    Map["Indal"] = 95075;
    Map["Hello"] = 9624;
    Map.insert(make_pair("Bot", 95021));

    for (auto &cell : Map)
    {
        cout << cell.first << " " << cell.second << endl;
    }

    return 0;
}