#include <iostream>
using namespace std;
int prime(int n)
{
    int flag = 0;
    for (int i = 2; i <= n / 2; i++)
    {
        if (n % i == 0)
        {
            flag = 1;
            return i;
            break;
        }
    }
    if (flag == 0)
    {
        return 1;
    }

    return 0;
}
int main()
{
    int n;
    cin >> n;
    cout << prime(n) << endl;

    return 0;
}